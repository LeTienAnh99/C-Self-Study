// Example using struct
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    struct Car {
        int size;
        string brand;
        char id;
    };

    Car carA;
    carA.size = 5;
    carA.brand = "Mustang";
    carA.id = 'A';
    
    cout << "The contents of carA is:" << endl;
    cout << "Size: " << carA.size << "\nBrand: " << carA.brand << "\nID: " << carA.id;
}