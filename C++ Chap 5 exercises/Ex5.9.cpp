// Ex 5.9
// Product of Odd Integers

#include <iostream>
using namespace std;

int i; // Loop variable
int product = 1; // Product of all odd numbers
int main()
{
    // product = pre_odd * odd;
    for (i=1; i <= 15; i++)
    {
        if ( i % 2 == 0  ) {
            cout << i << " is an even number\n";
        }
        else {
            cout << i << " is an odd number\n";
            product = product * i;
        }
    }

    //cout << "Value of final i is: " << i << endl;
    cout << "The product of all the odd numbers: " << product << endl;
}
