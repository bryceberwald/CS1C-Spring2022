/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    03
 * DUE DATE     :    Monday (02/14/22) @ 11:59pm
 **************************************************************/

#ifndef INVENTORY_H
#define INVENTORY_H

#include "functions.h"

#include <iostream> // For input & output.
#include <iomanip>  // For manipulating the input & output.
#include <string>   // For strings to be used.
#include <sstream>  // For string stream to be used.

using namespace std;
using namespace DataHolding;


/**************************************************************************
 * Inventory Class
 *************************************************************************/
class Inventory
{
    public:
		/******************************************************
		**********   CONSTRUCTOR && DESTRUCTOR    *************
		*******************************************************/

		/******************************************************
		 * Inventory ();
		 * Constructor; 
		 * Parameters: none
		 * Return: none
		 *******************************************************/
		Inventory();

		/******************************************************
		* ~Inventory ();                                       
		* Destructor; Does not perform any specific function  
		* Parameters: none                                    
		* Return: none
		*******************************************************/
		~Inventory();

		/******************************************************
		*****************     MUTATORS    *********************
		*******************************************************/

        /******************************************************
		* Class method used to add an item into the inventory
		using a linked list. This function takes in three
		parameters and returns nothing.
		*******************************************************/
        void AddItemToInventory(string name, float cost, int quantity);

        /******************************************************
		* Class method used to purchase an item of a certain
		quanity by taking in two parameters. One for the name
		of the product and another for the amount being bought.
		*******************************************************/
		void PurchaseItemForSale(string name, int amount);

		/******************************************************
		*****************     ACCESSORS    ********************
		*******************************************************/

 		/******************************************************
		* Class method used to display the items in the inventory.
		The name of the item, cost and quantity left will be
		displayed to the console as needed.
		*******************************************************/
        void DisplayLinkedList() const;

    protected:
        // Nothing yet!

    private:
        Items *head; // Pointer variable used to point to the head of the linked list.
		
};


#endif