#include <map>
#include <iostream>
#include "VendingMachine.hpp"
using namespace std;
int main()
{
    string option="",flow="";
    string item;
    int money,action;
    VendingMachine machine;
    map<string, int> *suggestion= new map<string, int>;
    (*suggestion)["NoSelection"] = 1;
    (*suggestion)["HasSelection"] = 2;
    (*suggestion)["InsertedMoney"] = 3;
    cout<<"Welcome to the vending machine!"<<endl;
    cout<<"Please make a order by 1->2->3"<<endl;
    cout<<"(1) select item"<<endl;
    cout<<"(2) insert money"<<endl;
    cout<<"(3) execute transaction"<<endl<<endl;
    cout<<"Special Actions:"<<endl;
    cout<<"(4) get sale price"<<endl;
    cout<<"(5) get inserted money"<<endl;
    cout<<"(6) cancel order"<<endl;
    cout<<"(7) see current status"<<endl;
    cout<<"What is your first action? Action:(1) ";
    while(true)
    {
        cin>>action;
        switch (action)
        {
            case 1:
                machine.listItems();
                cout<<"Please select your item: ";
                cin>>item;
                machine.selectItem(item);
                cout<<"What is your next step? Action:("<<(*suggestion)[machine.getState()]<<") ";
                break;
            case 2:
                cout<<"Please insert your money: ";
                cin>>money;
                machine.addMoney(money);
                cout<<"What is your next step? Action:("<<(*suggestion)[machine.getState()]<<") ";
                break;
            case 3:
                machine.executeTransaction();
                cout<<"What is your next step? Action:("<<(*suggestion)[machine.getState()]<<") ";
                break;
            case 4:
                cout<<machine.getSalePrice()<<endl;
                cout<<"What is your next step? Action:("<<(*suggestion)[machine.getState()]<<") ";
                break;
            case 5:
                cout<<"money you inserted "<<machine.getInsertedMoney()<<endl;
                cout<<"What is your next step? Action:("<<(*suggestion)[machine.getState()]<<") ";
                break;
            case 6:
                machine.cancelTransaction();
                cout<<"What is your next step? Action:("<<(*suggestion)[machine.getState()]<<") ";
                break;
            case 7:
                cout<<machine.printState()<<endl;
                cout<<"What is your next step? Action:("<<(*suggestion)[machine.getState()]<<") ";
                break;
            default:
                cout << "Opiton does not exist";
                break;
        }
    }
        
    return 0;
}
