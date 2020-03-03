#include "Node.hpp"
#include <string>
using namespace std;

class Stack
{
    private:
        Node* top;

    public:
        Stack();
        void push(Node* newNode);
        Node* pop();
        int peek();
        void display();
        string displayAtIndex(int index);
        int findCount();
        Node* findAtIndex(int index);
              
};