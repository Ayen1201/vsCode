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

    std::cout << "\n";
}

int main(int argc, const char * argv[]) {

    Stack<double> doubleStack;
    double doubleValue = 1.1;
    std::cout << "Pushing element onto doubleStack" << std::endl;

    //push 5 double onto doubleStack
    while(doubleStack.push(doubleValue))
    {
        std::cout << doubleValue << ' ';
        doubleValue += 1.1;
    }//end while

    std::cout << "\nStack is full. Cannot push " << doubleValue << "\n\nPoping element from doubleStack\n";

    while ( doubleStack.pop(doubleValue) )
    {
        std::cout << doubleValue << ' ';
    }
        std::cout << "\nStack is empty. Cannot pop\n";
}
