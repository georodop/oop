/*Chapter 1 Quiz, question 1
Write a single-file program (named main.cpp) that reads two separate integers 
from the user, adds them together, and then outputs the answer. The program 
should use three functions:

        A function named “readNumber” should be used to get (and return) a single 
    integer from the user.
        A function named “writeAnswer” should be used to output the answer. This 
    function should take a single parameter and have no return value.
        A main() function should be used to glue the above functions together. 

    Hint: You do not need to write a separate function to do the adding 
(just use operator+ directly).
    Hint: You will need to call readNumber() twice.
*/
#include <iostream>

//forward declarations
int readNumber ();
void writeAnswer (int);

int main()
{
    int parameter1 = readNumber();
    int parameter2 = readNumber();
    
    int result = parameter1 + parameter2;
    writeAnswer(result);
    
    return 0;
}

int readNumber()
{
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    
    return input;
}

void writeAnswer(int result)
{
    std::cout << "Result = " << result << std::endl;
}
