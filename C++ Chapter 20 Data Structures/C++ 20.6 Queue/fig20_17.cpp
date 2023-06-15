// Figure 20.17: fig20_17.cpp
// Template Queue class test program.
#include <iostream>
#include "Queue.h" // Queue class definition
using namespace std;

int main()
{
    Queue< int > intQueue; // Create Queue of integers

    cout << "Processing an integer Queue" << endl;

    // Enqueue integers onto intQueue
    for ( int i = 0; i < 3; ++i )
    {
        intQueue.enqueue( i );
        intQueue.printQueue();
    } // End for

    int dequeueInteger; // Store dequeued integer

    // Dequeue integers from intQueue
    while ( !intQueue.isQueueEmpty() ) // If not empty
    {
        intQueue.dequeue( dequeueInteger );
        cout << dequeueInteger << " dequeued" << endl;
        intQueue.printQueue();
    } // End while

    Queue< double > doubleQueue; // Create Queue of doubles
    double value = 1.1;
    
    cout << "Preprocessing a double Queue" << endl;

    // Enqueue floating-point values onto doubleQueue
    for ( int j = 0; j < 3; ++j )
    {
        doubleQueue.enqueue( value );
        doubleQueue.printQueue();
        value += 1.1;
    } // End for

    double dequeueDouble; // Variable to store dequeued double

    // Dequeue floating-point values from doubleQueue
    while ( !doubleQueue.isQueueEmpty() )
    {
        doubleQueue.dequeue( dequeueDouble );
        cout << dequeueDouble << " dequeued" << endl;
        doubleQueue.printQueue();
    } // End while
} // End main