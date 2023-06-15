// Figure 8.4: fi08_04.cpp
// Pointer operators & and *.
#include <iostream>
using namespace std;

int main()
{
    int a; // a is an integer
    int *aPtr; // aPtr is an integer * which is a pointer to variable a
    int b;
    
    // *aPtr trỏ vào a. Còn aPtr = address của a

    a = 7; // Assign 7 to a
    aPtr = &a; // Assign the address of a to aPtr
    cout << "Nhap so: ";
    cin >> b;
    cout << "The address of a is: " << &a
        << "\nThe value of aPtr is: " << aPtr;
    cout << "\n\nThe value of a is: " << a
        << "\nThe value of *aPtr is: " << *aPtr;
    cout << "\n\nShowing that * and & are inverses of "
        << "each other.\n&*aPtr = " << &*aPtr // Địa chỉ của con trỏ *aPtr
        << "\n*&aPtr = " << *&aPtr << endl; // Trỏ vào địa chỉ của &aPtr
} // End main
