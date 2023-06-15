// Figure 20.16: Queue.h
// Template Queue class definition derived from class List.
#ifndef QUEUE_H
#define QUEUE_H

#include "List.h" // List class definition

template< typename QUEUETYPE >
class Queue : private List< QUEUETYPE >
{
public:
    // Enqueue calls List member function inserAtBack
    void enqueue( const QUEUETYPE &data )
    {
        insertAtBack( data );
    } // End function enqueue

    // Dequeue calls List member function removeFromFront
    bool dequeue( QUEUETYPE &data )
    {
        return removeFromFront( data );
    } // End function dequeue

    // isQueueEmpty calls List member function isEmpty
    bool isQueueEmpty() const
    {
        return this->isEmpty();
    } // End function isQueueEmpty

    // printQueue calls List member function print
    void printQueue() const
    {
        this->print();
    } // End function printQueue
}; // End class Queue

#endif