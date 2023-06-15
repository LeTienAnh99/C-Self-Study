// Figure 21.3: DeckOfCards.cpp
// Define member functions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards
#include <iostream>
#include <iomanip>
#include <cstdlib> // Prototypes for rand and srand
#include <ctime> // Prototype for time
#include "DeckOfCards.h"
using namespace std;

// No-argument DeckOfCards constructor initializes deck
DeckOfCards::DeckOfCards()
    : deck( numberOfCards )
{
    // Initialize suit array
    static string suit[ suits ] = 
        { "Hearts", "Diamonds", "Clubs", "Spades" };

    // Initialize face array
    static string face[ faces ] = 
        { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
        "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    // Set values for deck of 52 Cards
    for ( int i = 0; i < numberOfCards; ++i ) 
    {
        deck[ i ].face = face[ i % faces ];
        deck[ i ].suit = suit[ i / faces ];
    } // End for

    srand( time( 0 ) ); // Seed random number generator
} // End no-argument DeckOfCards constructor

// Shuffle cards in deck
void DeckOfCards::shuffle()
{
    // Shuffle cards randomly
    for ( int i = 0; i < numberOfCards; ++i )
    {
        int j = rand() % numberOfCards;
        Card temp = deck[ i ];
        deck[ i ] = deck[ j ];
        deck[ j ] = temp;
    } // End for
}// End function shuffle()

// Deal cards in deck
void DeckOfCards::deal() const
{
    // Display each card's face and suit
    for ( int i = 0; i < numberOfCards; ++i )
        cout << right << setw( 5 ) << deck[ i ].face << " of "
            << left << setw( 8 ) << deck[ i ].suit
            << ( ( i + 1 ) % 2 ? '\t' : '\n' );
} // End function deal