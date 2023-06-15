// Figure 21.2: DeckOfCards.h
// Definition of class DeckOfCards that
// represents a deck of playing cards.
#include <string>
#include <vector>
using namespace std;

// Card structure definition
struct Card
{
    string face;
    string suit;
}; // End structure Card

// DeckOfCards class definition
class DeckOfCards
{
public: // The three static variables below exist until program finish execution
    static const int numberOfCards = 52;
    static const int faces = 13;
    static const int suits = 4;

    DeckOfCards(); // Constructor that initializes the deck
    void shuffle(); // Function to Shuffle cards in deck
    void deal() const; // Function to deal cards in deck

private:
    vector< Card > deck; // Represents deck of cards
}; // End class DeckOfCards