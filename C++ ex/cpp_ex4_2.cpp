//Compare 2 integers using if statement
#include <iostream>

using std::cout; //program uses cout, cin and endl
using std::cin;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Compare 2 integers\n";
    cout << "Enter 2 integers to compare: ";
    cin >> num1 >> num2; //read 2 integers from user

    if (num1 < num2)
        cout << "num1 < num2 " << "(num1 is smaller than num2)" << endl;
        //Alternative version:
        //cout << num1 << " < " << num2 << endl;
    else if (num1 > num2)
        cout << "num1 > num2 " << "(num1 is larger than num2)" << endl;
        //cout << num1 << " > " << num2 << endl;
    else if (num1 == num2)
        cout << "num1 = num2 " << "(num1 is equal to num2)" << endl;
        //cout << num1 << " = " << num2 << endl;

}

