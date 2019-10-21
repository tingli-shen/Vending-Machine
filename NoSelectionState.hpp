#ifndef NoSelectionState_hpp
#define NoSelectionState_hpp

#include <stdio.h>
#include <iostream>
#include "AbstractState.hpp"


using namespace std;
class VendingMachine;
class NoSelectionState :public AbstractState
{
public:

    NoSelectionState(VendingMachine *vendingMachine) :AbstractState(vendingMachine) {}
    void selectItem(string selection);
    void insertMoney(int value);
    void executeTransaction();
    void listItems();
    int cancelTransaction();
    string toString();
};

#endif /* NoSelectionState_hpp */
