#include "InsertedMoneyState.hpp"
#include "VendingMachine.hpp"
#include <iostream>
using namespace std;
void InsertedMoneyState::selectItem(string selection)
{
    cout << "Already has a selection, please cancel transaction to make a new selection" << endl;
}
string InsertedMoneyState::toString()
{
    return "InsertedMoney";
}
void InsertedMoneyState::insertMoney(int value)
{
    vendingMachine->insertMoney(value);
}

void InsertedMoneyState::executeTransaction()
{
    int diff = vendingMachine->getInsertedMoney() - vendingMachine->getSalePrice();

    if (diff >= 0)
    {
        cout << "Executing transaction, will return you : " + to_string(diff) +
            " money and item: " + vendingMachine->getSelectedItem() << endl;
        vendingMachine->setSelectedItem("null");
        vendingMachine->emptyInsertedMoney();
        vendingMachine->changeToNoSelectionState();
    }
    else
    {
        cout << "Not enough money, please insert " + to_string(-diff) + " more." << endl;
    }
}

int InsertedMoneyState::cancelTransaction()
{
    int insertedMoney = vendingMachine->getInsertedMoney();
    vendingMachine->setSelectedItem(NULL);
    vendingMachine->emptyInsertedMoney();
    vendingMachine->changeToNoSelectionState();
    return insertedMoney;
}
