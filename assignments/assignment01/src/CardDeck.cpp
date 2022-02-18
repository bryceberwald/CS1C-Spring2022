/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    01
 * DUE DATE     :    Sunday (01/23/21) @ 11:59pm
 **************************************************************/

#include "CardDeck.h"

/* ************************************************************
 * Constructor method for the CardDeck class will initalized 
 the deck of cards array to be used within the program.
 **************************************************************/
CardDeck::CardDeck(){

    int tempCardNumber = 2;
    int tempCardSuit = HEARTS;

    for(int i = 0; i < MAX_CARDS; i++){

        DeckOfCards[i].cardNumber = tempCardNumber;
        DeckOfCards[i].cardSuit = tempCardSuit;

        tempCardNumber++;

        if(tempCardNumber > 14){
            tempCardNumber = 2;
            tempCardSuit++;
        }

    }

}


/* ************************************************************
 * Destructor method for the CardDeck class has no purpose for
 this assignment and is used for a template basis.
 **************************************************************/
CardDeck::~CardDeck(){

}


/* ************************************************************
 * Mutator method for the CardDeck class will be used to
 conduct a perfect shuffle to alter the current deck of cards
 array of structs.
 **************************************************************/
void CardDeck::PerformPerfectSuffle(){

    Card firstHalf[HALF_DECK_OF_CARDS];
    for(int i = 0; i < HALF_DECK_OF_CARDS; i++){
        firstHalf[i].cardNumber = DeckOfCards[i].cardNumber;
        firstHalf[i].cardSuit = DeckOfCards[i].cardSuit;
    }

    Card secondHalf[HALF_DECK_OF_CARDS];
    int secondHalfIndex = 0;
    for(int i = 26; i < MAX_CARDS; i++){
        secondHalf[secondHalfIndex].cardNumber = DeckOfCards[i].cardNumber;
        secondHalf[secondHalfIndex].cardSuit = DeckOfCards[i].cardSuit;
        secondHalfIndex++;
    }

    Card ShuffledDeck[MAX_CARDS];
    int whole_deck_index = 0;
    int half_deck_index = 0;
    for(int i = 0; i < MAX_CARDS; i++){
        ShuffledDeck[whole_deck_index].cardNumber = firstHalf[half_deck_index].cardNumber;
        ShuffledDeck[whole_deck_index].cardSuit = firstHalf[half_deck_index].cardSuit;

        whole_deck_index++;

        ShuffledDeck[whole_deck_index].cardNumber = secondHalf[half_deck_index].cardNumber;
        ShuffledDeck[whole_deck_index].cardSuit = secondHalf[half_deck_index].cardSuit;

        whole_deck_index++;
        half_deck_index++;
    }

    for(int i = 0; i < MAX_CARDS; i++){
        DeckOfCards[i].cardNumber = ShuffledDeck[i].cardNumber;
        DeckOfCards[i].cardSuit = ShuffledDeck[i].cardSuit;
    }

}


/* ************************************************************
 * Accessor method for the CardDeck class will be used to 
 return the card for the deck using the parameter which is
 the index to be accessed.
 **************************************************************/
Card CardDeck::GetCurrentCard(int index) const{
    return DeckOfCards[index];
}


/* ************************************************************
 * Accessor method for the class CardDeck will be used to
 display the deck of cards from the array of structs as needed.
 **************************************************************/
void CardDeck::PrintCardDeck() const {

    stringstream createIndexString;
    stringstream createCardNumberString;
    stringstream createCardSuitString;

    string indexString;
    string cardNumberString;
    string cardSuitString;

    for (int i = 0; i < MAX_CARDS; i++){

        createIndexString << "i:" << i;

        // When necessary, change appropriate card numbers to card strings.
        if(DeckOfCards[i].cardNumber == 11){
            createCardNumberString << "Card #:J";
        } else if(DeckOfCards[i].cardNumber == 12){
            createCardNumberString << "Card #:Q";
        } else if(DeckOfCards[i].cardNumber == 13){
            createCardNumberString << "Card #:K";
        } else if(DeckOfCards[i].cardNumber == 14){
            createCardNumberString << "Card #:A";
        } else {
            createCardNumberString << "Card #:" << DeckOfCards[i].cardNumber;
        }

        // Change suit numbers to suit strings.
        if(DeckOfCards[i].cardSuit == 0){
            createCardSuitString << "Suit:HEARTS";
        } else if(DeckOfCards[i].cardSuit == 1){
            createCardSuitString << "Suit:DIAMONDS";
        } else if(DeckOfCards[i].cardSuit == 2){
            createCardSuitString << "Suit:CLUBS";
        } else if(DeckOfCards[i].cardSuit == 3){
            createCardSuitString << "Suit:SPADES";
        } else {
            createCardSuitString << "Suit:" << DeckOfCards[i].cardSuit;
        }

        // Stringify all string stream variables.
        indexString = createIndexString.str();
        cardNumberString = createCardNumberString.str();
        cardSuitString = createCardSuitString.str();

        // Output a string thats nice for display purposes.
        cout << endl << left << setw(7);
        cout << "****"  << setw(7) << indexString << setw(12) << cardNumberString << setw(20) << cardSuitString;
        cout << right << setw(7) << "****";

        // Reset string and stringstream variables to empty strings.
        createIndexString.str("");
        createCardNumberString.str("");
        createCardSuitString.str("");
        indexString = "";
        cardNumberString = "";
        cardSuitString = "";
    }

}

