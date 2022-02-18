/* ************************************************************
 * PROGRAMMER   :    BRYCE BERWALD
 * CLASS        :    CS1C MW 6:00-9:50pm
 * ASSIGNMENT # :    01
 * DUE DATE     :    Sunday (01/23/21) @ 11:59pm
 **************************************************************/

#include "functions.h"
#include "CardDeck.h"

int main() {

    // Call function to print the class header.
    PrintClassHeader(cout);

    // Create two instances of the CardDeck class to be initialized.
    CardDeck DeckOne;
    CardDeck DeckTwo;

    Card CurrentCard;        // CurrentCard is a struct type found in the CardDeck header file.
    int totalShuffles = 0;   // Variable is used for determining the overall shuffle amount.

    cout << "\nBEFORE SHUFFLING BEGINS... (Deck 1)";
    DeckOne.PrintCardDeck();

    // Call function to perform a perfect shuffle on DeckOne.
    DeckOne.PerformPerfectSuffle();
    totalShuffles++;

    cout << "\n\nAFTER ONE PERFECT SHUFFLE... (Deck 1)";
    DeckOne.PrintCardDeck();

    int equalCardCounter; // Used to determine if deck is back to its original state, resets before a new shuffle.

    // Loop until all cards in the array of structs is equal to each other.
    while(equalCardCounter < 51){

        // Reset/Reinitialize to zero.
        equalCardCounter = 0;

        // Call function to perform a perfect shuffle on DeckOne.
        DeckOne.PerformPerfectSuffle();
        totalShuffles++;

        // cout << "\n\nAFTER SHUFFLE #" << totalShuffles << " THE DECK ONE HAS BEEN UPDATED TO...";
        // DeckOne.PrintCardDeck();

        // Compare deck one with deck two to ensure if the deck is back to its original state.
        for(int i = 0; i < MAX_CARDS; i++){
            if(DeckTwo.GetCurrentCard(i).cardNumber == DeckOne.GetCurrentCard(i).cardNumber && DeckTwo.GetCurrentCard(i).cardSuit == DeckTwo.GetCurrentCard(i).cardSuit){
                equalCardCounter++;
            }
        }
    }

    cout << "\n\nFINAL DECK OUTCOME... (Deck 1)";
    DeckOne.PrintCardDeck();

    // Output a final display message with the total amount of perfect shuffles needed.
    cout << "\n\nTotal perfect shuffles to original state was: " << totalShuffles << endl;

    return 0;
    
}