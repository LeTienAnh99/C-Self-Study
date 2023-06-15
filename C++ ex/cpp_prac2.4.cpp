#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x, y, z, result;

    cout << "This program is to calculate the product of three integers: ";
    cin >> x >> y >> z;

    result = x * y * z;
    cout << "The product of three integers is: " << result;
    return 0;
}
