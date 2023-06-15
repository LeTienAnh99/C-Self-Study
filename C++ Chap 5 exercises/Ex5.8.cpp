// Ex 5.8
// Find the Smallest Integer

#include <iostream>
using namespace std;

int i; // Loop variable
int counter; // Indicate the total values need to be input
int a; // Integer input by user
int sm; // Smallest number
int main()
{
    cout << "Enter number of integers: ";
    cin >> counter;

    for (i=1; i <= counter; i++)
    {
        cout << "Enter " << counter << " integers: ";
        cin >> a;

        if (i==1) {
            sm = a;
        }
        else if (a<sm) {
            sm = a;
        }
    }
    cout << "The smallest number is: " << sm << endl;
}
