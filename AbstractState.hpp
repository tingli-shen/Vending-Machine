#ifndef AbstractState_hpp
#define AbstractState_hpp

#include <stdio.h>
#include "State.h"
#include <iostream>
using namespace std;
class VendingMachine;
class AbstractState :public State
{
protected:
    VendingMachine *vendingMachine;

public:
    AbstractState(VendingMachine *vendingMachine);
};
#endif /* AbstractState_hpp */
