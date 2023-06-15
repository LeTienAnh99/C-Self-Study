// Figure 10.22: Interface.h
// Proxy class Interface definition
// Client sees this source code, but the source code does not reveal
// the data layout of class Implementation

class Implementation; // Forward class declaration required by line 17

class Interface
{
public:
    Interface( int ); // Constructor
    void setValue( int ); // Same public interface as 
    int getValue() const; // class Implementation.h has
    ~Interface(); // Destructor
private:
    // Requires previous forward declaration (line 6)
    Implementation *ptr;
}; // End class Interface
