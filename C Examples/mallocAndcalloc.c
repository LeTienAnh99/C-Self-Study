// calloc example
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr;
    int size = 10; // Size of dynamic allocated array

    // Dynamically allocated an array of 10 elements, each element has a size of an integer
    ptr = ( int * )calloc( size, sizeof( int ) );

    for ( int i = 0; i < size; ++i )
    {
        printf( "Element of array: %d\n", ptr[ i ] );
    } // End for
} // End main