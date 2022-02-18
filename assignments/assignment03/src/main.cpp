/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    03
 * DUE DATE     :    Monday (02/14/22) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "Inventory.h"

using namespace DataHolding;

int main() {

    // Call function to print the class header to the console.
    PrintClassHeader(cout);

    // Create an instance of Inventory class.
    Inventory myInventory;

    // Add items to the inventory.
    myInventory.AddItemToInventory("Nike Basketball Shoes", 179.99, 15);
    myInventory.AddItemToInventory("Under Armour T-shirt", 29.99, 28);
    myInventory.AddItemToInventory("Brooks Running Shoes", 121.44, 13);
    myInventory.AddItemToInventory("Asics Running Shoes", 165.88, 12);
    myInventory.AddItemToInventory("Under Armour Shorts", 45.77, 35);

    // Display linked list before any purchases have occurred.
    cout << "\nBEFORE PURCHASE:";
    myInventory.DisplayLinkedList();
    cout << endl;

    // Items to be purchased with the information needed.
    PurchaseItem Item1;
    Item1.name = "Nike Basketball Shoes";
    Item1.cost = 179.99;
    Item1.quantity = 4;

    PurchaseItem Item2;
    Item2.name = "Under Armour T-shirt";
    Item2.cost = 29.99;
    Item2.quantity = 6;

    PurchaseItem Item3;
    Item3.name = "Under Armour Shorts";
    Item3.cost = 45.77;
    Item3.quantity = 6;

    PurchaseItem Item4;
    Item4.name = "Asics Running Shoes";
    Item4.cost = 165.88;
    Item4.quantity = 1;

    // Call class methods to purchase an item of a certain quantity.
    myInventory.PurchaseItemForSale(Item1.name, Item1.quantity);
    myInventory.PurchaseItemForSale(Item2.name, Item2.quantity);
    myInventory.PurchaseItemForSale(Item3.name, Item3.quantity);
    myInventory.PurchaseItemForSale(Item4.name, Item4.quantity);

    // Calculate the total spent on all items with various quantities.
    float totalSpent = (Item1.cost * Item1.quantity) + (Item2.cost * Item2.quantity) + (Item3.cost * Item3.quantity) + (Item4.cost * Item4.quantity);

    // Output the purchase reciept to the console.
    cout << "\nTHE RECEIPT: ";
    cout << left << endl;
    cout << setw(30) << "PURCHASED ITEMS:";
    cout << setw(10) << "COST:";
    cout << setw(8) << "AMOUNT: ";

    cout << right << endl << setfill('-');
    cout << setw(30) << " ";
    cout << setw(10) << " ";
    cout << setw(8) << " ";
    cout << setfill(' ') << left << endl;

    cout << setw(30) << Item1.name;
    cout << "$ " << setw(11) << Item1.cost;
    cout << setw(8) << Item1.quantity;
    cout << endl;

    cout << setw(30) << Item2.name;
    cout << "$ " << setw(11) << Item2.cost;
    cout << setw(8) << Item2.quantity;
    cout << endl;

    cout << setw(30) << Item3.name;
    cout  << "$ " << setw(11) << Item3.cost;
    cout << setw(8) << Item3.quantity;
    cout << endl;

    cout << setw(30) << Item4.name;
    cout << "$ " << setw(11) << Item4.cost;
    cout << setw(8) << Item4.quantity;
    cout << endl;

    cout << right;
    cout << setfill('-') << setw(48) << " " << setfill(' ') << endl;
    cout << left;
    
    cout << setw(30) << "TOTAL BEFORE TAX" << fixed << setprecision(2) << "$ " << totalSpent << endl;
    cout << setw(30) << "TOTAL AFTER TAX" << fixed << setprecision(2) <<  "$ " << totalSpent + (totalSpent * TAX_RATE) << endl << endl;

    // Display linked list after purchases have been made.
    cout << "\nAFTER PURCHASE:";
    myInventory.DisplayLinkedList();
    cout << endl;

    return 0;
}