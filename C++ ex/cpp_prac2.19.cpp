#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int sum, average, product;
    int x, y, z;
    int smallest, largest;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    sum = x + y + z;
    average = (x + y + z)/3;
    product = x *y * z;

    cout << "\nSum of three integers: " << sum << endl;
    cout << "Average of three integers: " << average << endl;
    cout << "Product of three integers: " << product << endl;

    if ( x > y && x > z )
        cout << "Largest number is: " << x;
    else if ( x < y && x < z )
        cout << "Smallest number is: " << x;
    if ( x == y && y == z)
        cout << "Three numbers are equal";
}
