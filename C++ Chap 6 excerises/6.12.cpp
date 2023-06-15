// Exercise 6.12
// Calculate parking charges
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double calculateCharges( double ); // Function prototype with 2 variables
double h; // Hours for car 1,2,3
int n; // Number of car
int a; // Counter for car
//double total_h = 0 ; //Total hour
int main()
{
    double total_h = 0; // Total hour
    double total_c = 0; // Total charge

    cout << "Charges for each car parked yesterday" << endl;
    cout << "Enter number of cars in the garage: ";
    cin >> n;

    cout << "Car" << setw( 10 ) << "Hours" << setw( 10 ) << "Charge" << endl;
    for ( int i = 1; i <= n; i++ )
    {
        //cout << "Car" << setw( 10 ) << "Hours" << setw( 10 ) << "Charge" << endl;
        //cout << "\nEnter hours for car " << i << ": ";


        cin >> h;
        //cout << "Charge: " << calculateCharges( h ) << endl;
        cout << i << setw( 10 ) << h << setw( 10 ) << calculateCharges( h ) << endl;
        total_h = total_h + h;
        total_c = total_c + calculateCharges( h );
    }
    cout << "Total hours: " << total_h << endl;
    cout << "Total charges: " << total_c << endl;
}

double calculateCharges( double charge )
{
    if (h <= 3) {
        charge = 2.0;
    }
    else if (h > 3 && h < 24) {
        charge = 2.0 + 0.5;
    }
    else if (h = 24) {
        charge = 10;
    }

    return charge;
}
