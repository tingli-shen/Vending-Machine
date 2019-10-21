#include "VendingMachine.hpp"
#include "NoSelectionState.hpp"
#include "HasSelectionState.hpp"
#include "InsertedMoneyState.hpp"
#include <iterator>
#include <map>
VendingMachine::VendingMachine()
{
    currentInsertedMoney = 0;
    currentSelectedItem = "null";
    noSelectionState = new NoSelectionState(this);
    hasSelectionState = new HasSelectionState(this);
    insertedMoneyState = new InsertedMoneyState(this);
    state = noSelectionState;

    itemPrice = new map<string, int>;
    (*itemPrice)["Coke"] = 199;
    (*itemPrice)["Sprite"] = 299;
    (*itemPrice)["Pepsi"] = 399;
}

void VendingMachine::setSelectedItem(string item)
{
    this->currentSelectedItem = item;
}

string VendingMachine::getSelectedItem()
{
    return currentSelectedItem;
}

void VendingMachine::insertMoney(int amount)
{
    this->currentInsertedMoney += amount;
}

void VendingMachine::emptyInsertedMoney()
{
    this->currentInsertedMoney = 0;
}

int VendingMachine::getInsertedMoney()
{
    return currentInsertedMoney;
}

int VendingMachine::getSalePrice()
{
    if (currentSelectedItem == "null")
    {
        cout << "Please make a selection before asking price" << endl<<"price: ";
        return 0;
    }
    else
    {
        cout<<"price: ";
        return (*itemPrice)[currentSelectedItem];
    }
}

void VendingMachine::changeToNoSelectionState()
{
    state = noSelectionState;
}

void VendingMachine::changeToHasSelectionState()
{
    state = hasSelectionState;
}

void VendingMachine::changeToInsertedMoneyState()
{
    state = insertedMoneyState;
}

void VendingMachine::selectItem(string selection)
{
    state->selectItem(selection);
}

void VendingMachine::addMoney(int value)
{
    state->insertMoney(value);
}

void VendingMachine::executeTransaction()
{
    state->executeTransaction();
}

int VendingMachine::cancelTransaction()
{
    return state->cancelTransaction();
}

string VendingMachine::printState()
{
    string res = "";
    res = "Current selection is: " + currentSelectedItem + "\ncurrent inserted money: " + to_string(currentInsertedMoney)
        + "\ncurrent state is : " + state->toString();
    return res;
}
string VendingMachine::getState()
{
    return state->toString();
}
void VendingMachine::listItems()
{
    map<string, int>::iterator itr;
    cout << "\tItem\tPrice\n";
    for (itr = itemPrice->begin(); itr != itemPrice->end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
}
