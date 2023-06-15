// Conditional statement using (?:)
#include<iostream>

using namespace std;
int n;

int main()
{
    cout << "Conditional using (?:)\n";
    cout << "Enter student grade: ";
    cin >> n;
    cout << ( n >= 60 ? "Student is good" : "Student is average" );
}
