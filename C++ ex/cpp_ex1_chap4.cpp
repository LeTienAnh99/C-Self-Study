// if statement examples
#include<stdio.h>
#include<iostream>
using namespace std;

int n;

int main()
{
    cout << "Check student condition\n";
    cout << "Enter student grade: " << endl;
    cin >> n;
    if ( n >= 60 )
        cout << "Student is good";
    if ( n < 60 )
        cout << "Student is average";
}
