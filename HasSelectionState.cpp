#include "HasSelectionState.hpp"
#include "VendingMachine.hpp"
#include <iostream>
using namespace std;
void HasSelectionState::executeTransaction()
{
    cout << "You need to insert money first" << endl;
}
string HasSelectionState::toString()
{
    return "HasSelection";
}
void HasSelectionState::selectItem(string selection)
{
    vendingMachine->setSelectedItem(selection);
}
void HasSelectionState::insertMoney(int value)
{
    vendingMachine->insertMoney(value);
    vendingMachine->changeToInsertedMoneyState();
}

int HasSelectionState::cancelTransaction()
{
    cout << "Transaction canceled" << endl;
    //vendingMachine->setSelectedItem(NULL);
    vendingMachine->changeToNoSelectionState();
    return 0;
}
