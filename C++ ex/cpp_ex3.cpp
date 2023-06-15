//Input from keyboard and print out the screen
#include <iostream> //allow program to perform input and output

// std::cin = input stream object. >> = stream extractor operator
// std::cout = output stream object. << = stream insertion operator

int main()
{
    int num1, num2, sum;
    std::cout << "Please insert first number: ";
    std::cin >> num1; //read first number from user into num1

    std::cout << "Insert secoond number: ";
    std::cin >> num2; //read second number from user into num2

    sum = num1 + num2; //Total of the 2 number
    sum = num1 + num2; //Total of the 2 number
    std::cout << "The sum of the 2 numbers is: " << sum <<std::endl;  //display sum, end line

    //std:endl will force any outputs to be displayed. In some cases, the outputs may need to wait for others then it will display, this solves that.
}
