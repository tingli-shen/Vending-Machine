#include <iostream>
using namespace std;
#ifndef State_h
#define State_h
class State
{
public:

    virtual void selectItem(string selection) = 0;
    virtual void insertMoney(int value) = 0;
    virtual void executeTransaction() = 0;
    virtual int cancelTransaction()=0;
    virtual string toString() = 0;
};

#endif /* State_h */
