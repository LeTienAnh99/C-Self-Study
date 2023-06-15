// Ex 5.6
// Averaging integer (but not that simple)
// Enter total numbers, then take the sum of them (excluding the last one) and calculate the average
#include <iostream>
#include <iomanip>
using namespace std;

int a; // Input integers
float ave; //
int sum = 0; //
int counter;
int i; // Loop variable
int main()
{
    cout << "Enter the total integers you'd like to calculate: ";
    cin >> counter;

    for (i=1; i <= counter; i++)
    {

        cout << "Enter those numbers: ";
        cin  >> a;
        if ( i < counter ) {
        sum = sum + a;
        }
        else if ( i == counter ) {
           i = i - 1;
           break; // Use break to get out of the loop early
        }
    }
    // Show the last i to check for correct increment
    cout << "The last value of i is: " << i;
    // This line will output an integer value: ave = sum / i;
    // Use below instead to get a decimal values
    ave = static_cast< double >( sum ) / i;
    cout << "Sum of all " << i << " number is: " << sum << endl;
    cout << "The average of all the values is: " << setprecision(2) << fixed
        << ave << endl;
}
