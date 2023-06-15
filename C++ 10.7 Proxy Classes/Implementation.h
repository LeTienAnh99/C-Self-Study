// Figure 10.21: Implementation.h
// Implementation class definition; Example of proxxy class

class Implementation
{
public:
    // Constructor
    Implementation( int v )
        : value( v ) // Initialize value with v
    {
        // Empty body
    } // End constructor Implementation

    // Set value to v
    void setValue( int v )
    {
        value = v; // Should validate v
    } // End function setValue

    // Return value
    int getValue() const
    {
        return value;
    } // End function getValue
private:
    int value; // Data that we would like to hide from the client
}; // End class Implementation