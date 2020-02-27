#include "Stack.hpp"
#include <iostream>

Stack::Stack()
{
    this->top = 0;
}

void Stack::push(int payload)
{
    Node* n = new Node(payload);
    if(top)
    {
        n->setNextNode(this->top);
        this->top = n;
    }
    else
    {
        this->top = n;
    }
}

int Stack::pop()
{
    int valueToReturn = this->top->getPayload();
    Node* temp = this->top;
    top = top->getNextNode();
    temp->setNextNode(0);
    delete temp;
    return valueToReturn;
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
    Node* currNode = this->top;
    int indx = index;
    string a = "";
    
    for(int i = 0; i <= indx; i++)
    {
        a = currNode->makeStringDisk();
        currNode = currNode->getNextNode();
    }
    return a;
}