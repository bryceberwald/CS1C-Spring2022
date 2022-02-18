/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    03
 * DUE DATE     :    Monday (02/14/22) @ 11:59pm
 **************************************************************/

#include "Inventory.h"

/* ************************************************************
 * This is the constructor function for the Inventory class.
 **************************************************************/
Inventory::Inventory() {
    this->head = NULL;
}


/* ************************************************************
 * This is the destructor which is left empty for this 
 assignments purposes.
 **************************************************************/
Inventory::~Inventory() {
    
}


/* ************************************************************
 * This function will add an item into the inventory. Three
 parameters are taken in and used to store a new item into the
 inventory.
 **************************************************************/
void Inventory::AddItemToInventory(string name, float cost, int quantity) {
    
    Items *itemsPtr;
	Items *tail;

	tail = this->head;

	itemsPtr = new Items;

	// Find the tail
	if (tail != NULL){
		while(tail->next != NULL){
			tail = tail->next;
		}
	}

    itemsPtr->name = name;
    itemsPtr->cost = cost;
    itemsPtr->quantity = quantity;

	if (tail == NULL) {
		head = itemsPtr;
		itemsPtr = NULL;

	} else {
		itemsPtr->next = NULL;
		tail->next = itemsPtr;
		tail = itemsPtr;

		itemsPtr = NULL;
	}
    delete itemsPtr;

}


/* ************************************************************
 * This function will allow the inventory in the linked list
 to be modified due to purchases being made in the client. The
 function takes in two parameters. One for the name and and 
 integer for the quantity being purchased.
 **************************************************************/
void Inventory::PurchaseItemForSale(string name, int amount) {
    
    bool isFound = false;
    Items *itemsPtr;

    itemsPtr = this->head;

    while(itemsPtr != NULL && !isFound) {
        if(itemsPtr->name == name) {
            itemsPtr->quantity -= amount;
            isFound = true;
        } else {
            isFound = false;
            itemsPtr = itemsPtr->next;
        }
    }
}


/* ************************************************************
 * This function will display the linked list which holds the
 items currently in the inventory and the cost, along with the
 remaining amount.
 **************************************************************/
void Inventory::DisplayLinkedList() const {
    Items *tempHead;

    tempHead = this->head;

    cout << left << endl;
    cout << setw(30) << "Name of Equipment:";
    cout << setw(10) << "Cost:";
    cout << setw(8) << "Quantity:";

    cout << right << endl << setfill('-');
    cout << setw(30) << " ";
    cout << setw(10) << " ";
    cout << setw(10) << " ";
    cout << setfill(' ') << left << endl;

    while(tempHead != NULL) {
        cout << setw(30) << tempHead->name << "$ " << setw(11) << tempHead->cost << setw(11) << tempHead->quantity << endl;
        tempHead = tempHead->next;
    }
}

