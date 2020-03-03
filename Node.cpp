#include "Node.hpp"
#include <string>
using namespace std;

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

string Node::makeStringDisk()
{
    string space = this->spaceMaker();
    string disc = "";
    int payload = this->getPayload();
    if(payload > 0 and payload < 5)
    {    
        for(int i = 0; i < payload; i++)
        {
            disc = disc + "=";
        }
        disc = disc + space;
        return disc;
    }

    else
    {
        disc = space;
        return disc;
    }
}

string Node::spaceMaker()
{
    string space = "";
    int a = this->getPayload();
    if(a == 5)
    {
        space = "     ";
        return space;
    }

    int b = -a + 5;
    for(int i = 1; i <= b; i++)
    {
        space = space + " ";
    }
    return space;
}