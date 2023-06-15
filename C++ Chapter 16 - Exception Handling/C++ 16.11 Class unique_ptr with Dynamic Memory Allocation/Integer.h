// Figure 16.7: Integer.h
// Integer class definition

class Integer
{
public:
    Integer( int i = 0 ); // Integer default constructor
    ~Integer(); // Integer destructor
    void setInteger( int i ); // Functions to set Integer
    int getInteger() const; // Function to return Integer
private:
    int value;
}; // End class Integer