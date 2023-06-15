// if..else statement
#include<iostream>
using namespace std;

int n;
int main()
{
    cout << "Using if..else to check the condition\n";
    cout << "Enter student grade: ";
    cin >> n;

    if ( n >= 60 )
        cout << "The student is good";
    else
        cout << "The student is average";
}
