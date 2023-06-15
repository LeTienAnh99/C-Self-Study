#include <stdio.h>

void function( int x )
{
    x = 5;
}

int main()
{   
    int x = 3;
    function(x);
    
    printf( "%d\n", x);
}