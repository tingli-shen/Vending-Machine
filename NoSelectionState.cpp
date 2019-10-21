#include "NoSelectionState.hpp"
#include "VendingMachine.hpp"
#include <iostream>

using namespace std;
void NoSelectionState::insertMoney(int value)
{
    cout << "Please make a selection first" << endl;
}
void NoSelectionState::executeTransaction()
{
    cout << "Please make a selection first" << endl;
}
int NoSelectionState::cancelTransaction()
{
    cout << "Please make a selection first" << endl;
    return 0;
}
string NoSelectionState::toString()
{
    return "NoSelection";
}
void NoSelectionState::selectItem(string selection)
{
    vendingMachine->setSelectedItem(selection);
    vendingMachine->changeToHasSelectionState();
}
void NoSelectionState::listItems()
{
    vendingMachine->listItems();

}
