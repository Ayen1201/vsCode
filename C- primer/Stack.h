#ifndef STACK_h
#define STACK_h

template <typename T>
class Stack
{
    public:
        Stack(int = 10); //defalt construtor size = 10

        ~Stack() //destructor
        {
            delete [] stackPtr;
        } 

        bool push (const T &); //push an element onto Stack
        bool pop (T &); // pop an element off Stack

        bool isEmpty() const //determine whether Stack is empty
        {
            return top == -1;
        } // end function isEmpty

        bool isFull() const // determin whether Stack is full
        {
            return top == size - 1;
        } // end function isFull

    private:
        int size; // # of element in the stack
        int top;  // location of the top element (-1 mean empty)
        T *stackPtr; // pointer to internal represention of the stack
};

//construtor template

template<typename T>
Stack<T>::Stack(int s)
       :size( s > 0 ? s : 10), //validate size
        top(-1), //Stack initially empty
        stackPtr(new T[size]) //allocate memory for elements
{
    //empty body
}// end Stack construtor template

//push element on Stack;
//if succesful, return true; otherwise, return false

template<typename T>
bool Stack<T>::push(const T &pushValue)
{
    if ( !isFull() )
    {
        stackPtr[++top] = pushValue; //place item on Stack
        return true; // push successful
    }// end if

    return false; // push unsuccessful
}

template<typename T>
bool Stack<T>::pop(T &popValue)
{
    if ( !isEmpty() )
    {
        popValue = stackPtr[top--]; //remove item from Stack
        return true; // pop successful
    }// end if

    return false; // pop unsuccessful
} //end function template pop

#endif