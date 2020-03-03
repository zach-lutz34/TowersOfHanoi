#include "Stack.hpp"
#include <iostream>
#include <string>
using namespace std;

Stack::Stack()
{
    this->top = 0;
}

void Stack::push(Node* newNode)
{
    Node* n = newNode;
    if(top)
    {
        //we have at least one element on our stack
        n->setNextNode(this->top);
        this->top = n;
    }
    else
    {
        this->top = n;
    }
    
}

Node* Stack::pop()
{
    Node* nodeToReturn = this->top;
    top = top->getNextNode();
    return nodeToReturn;
}

int Stack::peek()
{
    return this->top->getPayload();
}

void Stack::display()
{
    if(this->top)
    {
        Node* currNode = this->top;
        while(currNode)
        {
            std::cout << currNode->getPayload() << "\n";
            currNode = currNode->getNextNode();
        }
    }
    else
    {
        std::cout << "Empty Stack\n";
    }
}

string Stack::displayAtIndex(int index)
{
    int indexOfGrid = index;
    int itemsInStack = this->findCount();
    if(itemsInStack == -1)
    {
        string space = "     ";
        return space;
    }
    if(itemsInStack == 0)
    {
        if(indexOfGrid == 2)
        {
            string disc = this->findAtIndex(0)->makeStringDisk();
            return disc;
        }
        else
        {
            string space = "     ";
            return space;
        }
        
    }
    if(itemsInStack == 1)
    {
        if(indexOfGrid == 1)
        {
            string disc = this->findAtIndex(0)->makeStringDisk();
            return disc;
        }
        else if(indexOfGrid == 2)
        {
            string disc = this->findAtIndex(1)->makeStringDisk();
            return disc;
        }
        else
        {
            string space = "     ";
            return space;
        }
        
    }
    if(itemsInStack == 2)
    {
        if(indexOfGrid == 0)
        {
            string disc = this->findAtIndex(0)->makeStringDisk();
            return disc;
        }
        else if(indexOfGrid == 1)
        {
            string disc = this->findAtIndex(1)->makeStringDisk();
            return disc;
        }
        else
        {
            string disc = this->findAtIndex(2)->makeStringDisk();
            return disc;
        }
    }
}

int Stack::findCount()
{
    int count = -1;
    if(this->top->getPayload() < 5)
    {
        Node* currNode = this->top;
        while(currNode)
        {
            if(currNode->getPayload() < 5)
            {
                count = count + 1;
                currNode = currNode->getNextNode();
            }
            else
            {
                return count;
            }
        }
        return count;
    }
    else
    {
        return count;
    }
}

Node* Stack::findAtIndex(int index)
{
    Node* currNode = this->top;
    if(index == 0)
    {
        return currNode;
    }
    else
    {
        for(int i = 0; i < index; i++)
        {
            currNode = currNode->getNextNode();
        }
        return currNode;
    }
}