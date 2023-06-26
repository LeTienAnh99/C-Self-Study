// Exercise 8.9
#include <iostream>
using namespace std;

int main()
{
    long int value1 = 200000;
    long  int value2;
    long  int *longPtr; 
    
    longPtr = &value1;
    cout << "longPtr = " << *longPtr << endl;

    value2 = value1;
    cout << "value2 = " << value2 << endl;

    cout << "Address of value1 is: " << &value1 << endl;

    cout << "Address store in longPtr: " << longPtr << endl;

}