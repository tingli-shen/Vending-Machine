#ifndef InsertedMoneyState_hpp
#define InsertedMoneyState_hpp

#include <stdio.h>
#include <iostream>
#include "AbstractState.hpp"

using namespace std;
class VendingMachine;
class InsertedMoneyState :public AbstractState
{
public:

    InsertedMoneyState(VendingMachine *vendingMachine) :AbstractState(vendingMachine) {}
    void selectItem(string selection);
    void insertMoney(int value);
    void executeTransaction();
    int cancelTransaction();
    string toString();
};
#endif /* InsertedMoneyState_hpp */
