/*******************************************************************************
 * Now let’s try something a little more complex. Let’s write a class that 
 * implements a simple stack from scratch. Review lesson 7.9 -- The stack and 
 * the heap if you need a refresher on a what a stack is.
 * 
 * The class should be named Stack, and should contain:
 *  * A private fixed array of integers of length 10.
 *  * A private integer to keep track of the length of the stack.
 *  * A public member function named reset() that sets the length to 0 and all 
 *    of the element values to 0.
 *  * A public member function named push() that pushes a value on the stack. 
 *    push() should return false if the array is already full, and true otherwise.
 *  * A public member function named pop() that pops a value off the stack and 
 *    returns it. If there are no values on the stack, it should assert out.
 *  * A public member function named print() that prints all the values in the stack.
 * 
 * Make sure the following program executes correctly:
 * int main()
 * {
 * 	Stack stack;
 * 	stack.reset();
 *  
 * 	stack.print();
 *  
 * 	stack.push(5);
 * 	stack.push(3);
 * 	stack.push(8);
 * 	stack.print();
 *  
 * 	stack.pop();
 * 	stack.print();
 *  
 * 	stack.pop();
 * 	stack.pop();
 *  
 * 	stack.print();
 *  
 * 	return 0;
 * }
 * 
 * This should print:
 * 
 * ( )
 * ( 5 3 8 )
 * ( 5 3 )
 * ( )
*******************************************************************************/
#include <iostream>
#include <cassert>
//#include <cstring>

class Stack
{
//* The class should be named Stack, and should contain:
//*  * A private fixed array of integers of length 10.
    int myArray[10];

//*  * A private integer to keep track of the length of the stack.
    int length{ 0 };

//*  * A public member function named reset() that sets the length to 0 and all 
//*    of the element values to 0.
public:
    void reset()
    {
        length = 0;
        //memset(myArray, 0, sizeof(myArray));
    }
   
//*  * A public member function named push() that pushes a value on the stack. 
    bool push(int newValue)
    {
//*    push() should return false if the array is already full, and true otherwise.
        if (length == 10)
            return false;
            
        myArray[length] = newValue;
        length++;
        return true;
    }
    
//*  * A public member function named pop() that pops a value off the stack and 
//*    returns it. If there are no values on the stack, it should assert out.
    int pop()
    {
        assert(length);
        int returnValue = myArray[length];
        myArray[length] = 0;
        length--;
        return returnValue;
    }
//*  * A public member function named print() that prints all the values in the stack.
    void print()
    {
		std::cout << "( ";
		for (int i = 0; i < length; ++i)
			std::cout << myArray[i] << ' ';
		std::cout << ")\n";
    }
    
};

int main()
{
	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
 
	return 0;
}