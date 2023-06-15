// Ex 5.5
// Summing integers using for statement

#include <iostream>
using namespace std;

int counter; // counter for numbers of integer to be summed
int num; // Number to be entered (Loop variable)
int sum = 0; // Sum of numbers, initial sum = 0
int a; // Input values saved in this variable
int main()
{
    cout << "Enter numbers of integer to be summed: " << endl;
    cin >> counter;
    cout << "Enter those " << counter << " integers: ";
    for (num = 1; num <= counter; ++num )
    {
        cin >> a;
        sum = sum + a;
    }
    cout << "The sum of the input sequences is: " << sum << endl;
}
