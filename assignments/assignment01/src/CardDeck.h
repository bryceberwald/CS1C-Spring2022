/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    01
 * DUE DATE     :    Sunday (01/23/21) @ 11:59pm
 **************************************************************/

#ifndef CardDeck_H_
#define CardDeck_H_

#include <iostream> // For input & output.
#include <iomanip>  // For manipulating the input & output.
#include <string>   // For strings to be used.
#include <sstream>  // For string stream to be used.

using namespace std;

// Constant Declarations
const int MAX_CARDS = 52;
const int HALF_DECK_OF_CARDS = 26;

// Enum created for card suits.
enum CardSuit {
    HEARTS,    // 0
    DIAMONDS,  // 1
    CLUBS,     // 2
    SPADES,    // 3
};

// Struct created for each card in the deck to be held in array of structs.
struct Card {
    int cardNumber;
    int cardSuit;
};

/**************************************************************************
 * Deck of Cards Class
 *************************************************************************/
class CardDeck
{
    public:
		/******************************************************
		**********   CONSTRUCTOR && DESTRUCTOR    *************
		*******************************************************/

		/******************************************************
		 * CardDeck ();
		 * Constructor; Initialize CardDeck attributes.
		 * Parameters: none
		 * Return: none
		 *******************************************************/
		CardDeck();

		/******************************************************
		* ~CardDeck ();                                       
		* Destructor; Does not perform any specific function  
		* Parameters: none                                    
		* Return: none
		*******************************************************/
		~CardDeck();

		/******************************************************
		*****************     MUTATORS    *********************
		*******************************************************/

		/******************************************************
		* Class method performs a pefect shuffle on the 
		initialized array of structs containing a deck of cards.
		*******************************************************/
		void PerformPerfectSuffle();

		/******************************************************
		*****************     ACCESSORS    ********************
		*******************************************************/

		/******************************************************
		* Class method with print the deck of cards as needed 
		to the console.
		*******************************************************/
		void PrintCardDeck() const;

		/******************************************************
		* Class method will return the current card for the deck
		using the parameter which will be the index to be 
		accessed.
		*******************************************************/
		Card GetCurrentCard(int index) const;

    protected:
        // None!!!

    private:
        Card DeckOfCards[MAX_CARDS]; // Array of structs to hold every card in a deck of 52 cards.
		
};

#endif /* CardDeck_H_ */