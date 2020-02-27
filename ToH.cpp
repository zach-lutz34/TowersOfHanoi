#include "ToH.hpp"
#include <string>
#include <iostream>
using namespace std;

TowersOfHanoi::TowersOfHanoi(Stack* left, Stack *middle, Stack *right)
{
    this->left = left;
    this->middle = middle;
    this->right = right;
}

void TowersOfHanoi::displayTowers()
{
    string zero = "|" + left->displayAtIndex(0) + "|" + middle->displayAtIndex(2) + "|" + right->displayAtIndex(2);
    string one = "|" + left->displayAtIndex(1) + "|" + middle->displayAtIndex(1) + "|" + right->displayAtIndex(1);
    string two = "|" + left->displayAtIndex(2) + "|" + middle->displayAtIndex(0) + "|" + right->displayAtIndex(0);
    std::cout << zero << "\n";
    std::cout << one << "\n";
    std::cout << two << "\n";
}