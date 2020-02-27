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
        TowersOfHanoi(Stack* left, Stack* middle, Stack* right);
        void displayTowers();
        
};