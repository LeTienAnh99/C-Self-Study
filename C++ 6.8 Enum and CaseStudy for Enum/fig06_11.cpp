// Figure 6.11: fig06_11.cpp
// Craps simulation
#include <iostream>
#include <cstdlib> // Contains prototypes for functions srand and rand
#include <ctime> // Contains prototype for function time
using namespace std;

int rollDice(); // Function prototype, rolls dice, calculates and displays sum

int main()
{
    // Enumeration with constants that represent the game status
    enum Status { CONTINUE, WON, LOST }; // All caps in constants

    int myPoint; // Point if no win or loss on first roll
    Status gameStatus; // Can contain CONTINUE, WON or LOST

    // Randomise random number generator using current time
    srand( time( 0 ) );

    int sumOfDice = rollDice(); // First roll of the dice

    // Determine game status and point (if needed) based on first roll
    switch ( sumOfDice )
    {
        case 7: // Win with 7 on first roll
        case 11: // Win with 11 on first roll
            gameStatus = WON;
            break;
        case 2: // Lose with 2 on first roll
        case 3: // Lose with 3 on first roll
        case 12: // Lose with 12 on first roll
            gameStatus = LOST;
            break;
        default: // Did not win or lose, so remember point
            gameStatus = CONTINUE; // Game is not over
            myPoint = sumOfDice; // Remember the point
            cout << "Point is " << myPoint << endl;
            break; // Optional at end of switch
    } // End switch

    // While game is not complete
    while ( gameStatus = CONTINUE ) // Not WON or LOST
    {
        sumOfDice = rollDice(); // Roll dice again

        // Determine game status
        if ( sumOfDice == myPoint ) // Win by making point
            gameStatus = WON;
        else 
            if ( sumOfDice == 7 ) // Lose by rolling 7 before point
                gameStatus = LOST;
    } // End while

    // Display won or lost message
    if ( gameStatus == WON )
        cout << "Player wins" << endl;
    else 
        cout << "Player loses" << endl;
} // End main

// Roll dice, calculate sum and display results
int rollDice()
{
    // Pick random die values
    int die1 = 1 + rand() % 6; // First die roll
    int die2 = 1 + rand() % 6; // Second die roll

    int sum = die1 + die2; // Compute sum of die values

    // Display results of this roll
    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
        return sum; // End function rollDice
} // End function rollDice