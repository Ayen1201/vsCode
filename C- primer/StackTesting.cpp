//Stack testing by Danny Lin
//

#include <iostream>
#include <string>
#include "Sales_item.h"
#include "Stack.h"

template<typename T>
void stackTest(Stack<T> &theStack, T value, T increment, const std::string stackName)
{
    std::cout << "\nPushing element onto Stack" << std::endl;

    while(theStack.push(value))
    {
        std::cout << value << ' ';
        value += increment;
    }

    std::cout << "\n\n" << stackName 
              << " is full, so cannot pushing " << value << "\n\n"
              << "Poping elements from " << stackName << std::endl;
    while(theStack.pop(value))
    {
        std::cout << value << ' ';
    }

    std::cout << '\n' << stackName << " is empty, so cannot pop\n";
              
}

int main(int argc, const char * argv[]) {

    Stack<double> doubleStack(10);
    double doubleValue = 1.1;
    double d_increment = 1.1;

    Stack<int> intStack(5);
    int intValue = 1;
    int int_increment = 1;

    stackTest(doubleStack, doubleValue, d_increment, "doubleStack" );
    std::cout << "\n\n";

    stackTest(intStack, intValue, int_increment, "intStack");
    
}
