#ifndef VendingMachine_hpp
#define VendingMachine_hpp

#include <stdio.h>
#include <map>
#include <iostream>

using namespace std;
class AbstractState;
class NoSelectionState;
class HasSelectionState;
class InsertedMoneyState;
class VendingMachine
{
private:
    string currentSelectedItem;
    int currentInsertedMoney;
    AbstractState *state;
    NoSelectionState *noSelectionState;
    HasSelectionState *hasSelectionState;
    InsertedMoneyState *insertedMoneyState;
    map<string, int> *itemPrice;

public:
    VendingMachine();
    void setSelectedItem(string item);
    string getSelectedItem();
    void insertMoney(int amount);
    void emptyInsertedMoney();
    int getInsertedMoney();
    int getSalePrice();
    void changeToNoSelectionState();
    void changeToHasSelectionState();
    void changeToInsertedMoneyState();
    void selectItem(string selection);
    void addMoney(int value);
    void executeTransaction();
    int cancelTransaction();
    string printState();
    void listItems();
    string getState();
};
#endif /* VendingMachine_hpp */
