// Test the quiz code
#include <iostream>
using namespace std;

int main()
{
    int num;
    int a = 0x20;
    num = 0x20 + 020 + 20; 
    cout << "Num is: " << num;
    cout << "\nSize of num is: " << sizeof( num ); 
    cout << "\na is: " << a << "\n";

    int b = 5;
    float c;
    cout << sizeof(++b + c) << "\n";
    cout << b;
    return 0;
} // End main