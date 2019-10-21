# Vending-Machine
This C++ project implements and simulates real vending machine.  
The best and more effetive way to implement it is to use [state pattern](https://en.wikipedia.org/wiki/State_pattern).  
## Machine States
1. No Selection State:  
The initial state that the customer has not selected the item.  
2. Has Selection State:  
The customer has selected the item and is ready to insert some money.  
3. Inserted Money State:  
The customer has inserted the money and is ready to make a transaction.  
## Actions that customers can take
1. select an item.  
2. insert money.
3. excute transaction.
4. see the price of the item that he/she select.
5. see the amount of money that he/she insert.
6. restart order.
7. see all the information that he/she input.
8. cancel order.
## Mechanism
The vending machine will jump state from state based on the what the machine has done based on orders from the customer. After every action, the machine will suggest the next action and ask the customer what the next action is.     
Every state can do all the actions listed above but act differently.  
For example, if you let the machine insert money without selecting any item first, the machine will tell you to select item first.
## Class Diagram
<img src="class diagram.PNG">
## Program example
```
Welcome to the vending machine!
Please make a order by 1->2->3
(1) select item
(2) insert money
(3) execute transaction

Special Actions:
(4) get sale price
(5) get inserted money
(6) restart order
(7) see current status
(8) cancel order
What is your first action? Action:(1) 2
Please insert your money: 300
Please make a selection first
What is your next step? Action:(1) 1
	Item	Price
	Coke	199
	Pepsi	399
	Sprite	299
Please select your item: Coke
What is your next step? Action:(2) 4
199
What is your next step? Action:(2) 3
You need to insert money first
What is your next step? Action:(2) 2
Please insert your money: 300
What is your next step? Action:(3) 7
Current selection is: Coke
current inserted money: 300
current state is : InsertedMoney
What is your next step? Action:(3) 3
Executing transaction, will return you : 101 money and item: Coke
What is your next step? Action:(1) 8
Program ended with exit code: 0
```
