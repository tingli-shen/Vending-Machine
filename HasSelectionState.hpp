#ifndef HasSelectionState_hpp
#define HasSelectionState_hpp

#include <stdio.h>
#include <iostream>
#include "AbstractState.hpp"
#include "VendingMachine.hpp"

using namespace std;
class VendingMachine;
class HasSelectionState :public AbstractState
{
public:

    HasSelectionState(VendingMachine *vendingMachine) :AbstractState(vendingMachine) {}
    void selectItem(string selection);
    void insertMoney(int value);
    void executeTransaction();
    int cancelTransaction();
    string toString();

};

#endif /* HasSelectionState_hpp */
