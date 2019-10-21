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
&nbsp;1. customer can select an item.  
2. customer can insert money.
3. customer can excute transaction.
4. customer can see the price of the item that he/she select.
5. customer can see the amount of money that he/she insert.
6. customer can restart order.
7. customer can see all the information that he/she input.
8. customer can cancel order.
## Mechanism
The vending machine will jump state from state based on the what the machine has done based on orders from the customer. After every action, the machine will ask the customer what the next action is and suggest the next action to the customer.     
Every state can do all the actions listed above but act differently.  
For example, if you let the machine insert money without selecting any item first, the machine will tell you to select item first.
