#include "Stack.hpp"
#include <iostream>
#include <string>

int main()
{
    Node* zero = new Node(5);
    Node* oneDisc = new Node(1);
    Node* twoDisc = new Node(2);
    Node* threeDisc = new Node(3);

    Node* zero1 = new Node(5);
    Node* zero2 = new Node(5);
    Node* zero3 = new Node(5);
    Node* zero4 = new Node(5);
    Node* zero5 = new Node(5);
    Node* zero6 = new Node(5);

    
    Stack* left = new Stack();
    left->push(zero);
    left->push(threeDisc);
    left->push(twoDisc);
    left->push(oneDisc);


    Stack* middle = new Stack();
    middle->push(zero1);
    middle->push(zero2);
    middle->push(zero3);
    

    Stack* right = new Stack();
    right->push(zero4);
    right->push(zero5);
    right->push(zero6);



    TOH* game = new TOH(left, middle, right);
    game->populateArray();
    game->play();

    return 0;
}