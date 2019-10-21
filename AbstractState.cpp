#include <iostream>

#include "AbstractState.hpp"
using namespace std;
AbstractState::AbstractState(VendingMachine *vendingMachine)
{
    this->vendingMachine = vendingMachine;
}
