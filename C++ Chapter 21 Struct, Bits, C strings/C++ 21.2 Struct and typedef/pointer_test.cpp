#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    
    int *ptr = &a;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << &ptr << endl;

}