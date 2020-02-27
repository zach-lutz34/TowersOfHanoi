#include "Node.hpp"

Node::Node(int payload)
{
    this->payload = payload;
    this->nextNode = 0;
}

int Node::getPayload()
{
    return this->payload;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}


string Node::mkDisk()
{
    string s = this->sMaker();
    string disc = "";
    int payload = this->getPayload();
    if(payload != 0)
    {    
        for(int i = 0; i < payload; i++)
        {
            disc = disc + "=";
        }
        disc = disc + s;
        return disc;
    }

    else
    {
        disc = disc + space;
        return disc;
    }
}

string Node::sMaker()
{
    string s = "";
    int a = this->getPayload();
    int b = -a + 5;
    for(int i = 1; i <= b; i++)
    {
        s = s + " ";
    }
    return s;
}