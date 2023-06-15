//Compare 2 integers using if statement
#include <iostream>

using std::cout; //program uses cout, cin and endl
using std::cin;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Compare 2 integers\n";
    cout << "Enter 2 integers to compare\n";

    cout << "Enter 1st integer: ";
    cin >> num1;
    cout << "Enter 2nd integer: ";
    cin >> num2;

    if (num1 < num2)
        cout << "num1 < num2";
    else if (num1 > num2)
        cout << "num1 > num2";
    else if (num1 == num2)
        cout << ("num1 = num2");

}
