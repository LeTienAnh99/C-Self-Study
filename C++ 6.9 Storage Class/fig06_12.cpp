// Fig 6.12: fig06_12.cpp
// Scoping example
#include <iostream>
using namespace std;

void useLocal(); // Function prototype
void useStaticLocal(); // Function prototype
void useGlobal(); // Function prototype

int x = 1; // Global variable

int main()
{
    cout << "Global x in main is " << x << endl;

    int x = 5; // Local variable to main

    cout << "Local x in main's outer scope is " << x << endl;

    { // Start new scope
        int x = 7; // Hides both x in outer scope and global x

        cout << "Local x in main's inner scope is " << x << endl;
    } // End new scope

    cout << "Local x in main's outer scope is " << x << endl;

    useLocal(); // useLocal has local x
    useStaticLocal(); // useStaticLocal has static local x
    useGlobal(); // useGlobal uses global x
    useLocal(); // useLocal reinitializes its local x
    useStaticLocal(); // Static local x retains its prior value
    useGlobal(); // Global x also retains its prior value

    cout << "\nLocal x in main is " << x << endl;
} // End main

// useLocal reinitializes local variable x during each call
void useLocal()
{
    int x = 25; // Initialized each time useLocal is called

    cout << "\nLocal x is " << x << " on entering useLocal" << endl;
    ++x;
    cout << "Local x is " << x << " on exiting useLocal" << endl;
} // End function useLocal

// useStaticLocal initializes static local variable x only the first
// time the function is called; value of x is saved
// between calls to this function
void  useStaticLocal()
{
    static int x = 50; // Initializes first time useStaticLocal is called

    cout << "\nLocal static x is " << x << " on entering useStaticLocal"
        << endl;
    ++x;
    cout << "Local static x is " << x << " on exiting use StaticLocal"
        << endl;
} // End function useStaticLocal

// useGlobal modifies global variable x during each call
void useGlobal()
{
    cout << "\nGlobal x is " << x << " on entering useGlobal" << endl;
    x *= 10;
    cout << "Global x is " << x << " on exiting useGlobal" << endl;
} // End function useGlobal
