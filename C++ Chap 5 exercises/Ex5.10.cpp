// Ex 5.10
// Factorials using for loop
// Factorials means: n! = n*(n-1)*(n-2)*...*1

#include<iostream>
#include<iomanip>
using namespace std;

int n; // Loop variable for factorial calculating
int i; // Loop variable for executing from 1 to 5
unsigned fac; // For large number, use unsigned int to display large integer, if not, it will display a negative one
int main()
{
    cout << "Factorial from 1 to 5:" << endl;

    for (i = 1; i <= 20; i++)
    {
        fac = 1; // Set fac=1 at this position to reset the fac value from previous loop
        for (n = 1; n <= i; n++)
        {
            fac = fac*n;
            //cout << "Factorial of " << n << " is: " << fac;
        }
        cout << "Factorial of " << i << " is: " << fac << endl;
    }
}
