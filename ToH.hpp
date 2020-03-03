#include "Stack.hpp"
#include <string>
using namespace std;

class TowersOfHanoi
{
    private:
        
        Stack* left;
        Stack* middle;
        Stack* right;
        

    public:
        Stack* arrayOfTowers[3];
        TowersOfHanoi(Stack* left, Stack* middle, Stack* right);
        void displayTowers();
        void move(int towerA, int towerB);
        void populateArray();
        Stack* returnTower(int tower);
        int checkWin();
        void play();
              
};