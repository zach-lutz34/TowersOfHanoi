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
    string zero = "|" + left->displayAtIndex(0) + "|" + middle->displayAtIndex(0) + "|" + right->displayAtIndex(0);
    string one = "|" + left->displayAtIndex(1) + "|" + middle->displayAtIndex(1) + "|" + right->displayAtIndex(1);
    string two = "|" + left->displayAtIndex(2) + "|" + middle->displayAtIndex(2) + "|" + right->displayAtIndex(2);
    std::cout << zero << "\n";
    std::cout << one << "\n";
    std::cout << two << "\n";
    std::cout << "\n";
}

void TowersOfHanoi::move(int towerA, int towerB)
{   
    Stack* firstTower = returnTower(towerA);
    Stack* secondTower = returnTower(towerB);
    int firstTowerInt = firstTower->peek();

    if(firstTower->peek() <= secondTower->peek() and firstTowerInt < 5)
    {
        Node* discToMove = firstTower->pop();
        secondTower->push(discToMove);
    }
    else if(firstTowerInt == 5)
    {
        std::cout << "You can't move from an emtpy tower!\n";
    }
    else
    {
        std::cout << "You can't move here!\n";
    }
}

void TowersOfHanoi::populateArray()
{
    this->arrayOfTowers[0] = this->left;
    this->arrayOfTowers[1] = this->middle;
    this->arrayOfTowers[2] = this->right;
}

Stack* TowersOfHanoi::returnTower(int tower)
{
    int indexOfTower = tower - 1;
    Stack* towerToReturn = arrayOfTowers[indexOfTower];
    return towerToReturn;
}

int TowersOfHanoi::checkWin()
{
    Stack* right = this->arrayOfTowers[2];
    if(right->findCount() == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void TowersOfHanoi::play()
{
    int numOfMoves = 0;
    int winStatus = 0;
    int towerA, towerB;
    while(winStatus == 0)
    {
        this->displayTowers();
        std::cout <<"Enter a tower you want to move from"<< "\n";
        std::cin >> towerA;
        std::cout << "\n";
        std::cout <<"Enter a tower you want to move to"<< "\n";
        std::cin >> towerB;
        std::cout << "\n";
        this->move(towerA, towerB);
        numOfMoves = numOfMoves + 1;
        winStatus = this->checkWin();
        std::cout << "\n";
    }

    string stringNumOfMoves = to_string(numOfMoves);
    std::cout <<"Congratulations, you won in "<< stringNumOfMoves << " moves!"<< "\n";
    this->displayTowers();
}