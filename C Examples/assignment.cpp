#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 6;

    a = b; // NOTE: ASSIGNMENT IS FROM RIGHT TO LEFT
    cout << a << endl;
    cout << b << endl;

    b = b + 1;
    cout << "After assignment, a and b is: " << a << " " << b << endl;
    a = a + 2; 
    cout << "After assignment, a and b is: " << a << " " << b << endl;
}

// RESULTS:
// 6
// 6
// After assignment, a and b is: 6 7
// After assignment, a and b is: 8 7