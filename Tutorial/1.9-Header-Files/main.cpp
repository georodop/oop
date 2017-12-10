//Purpose: Just testing compiling and linking a program with multiple .cpp files
//Here we also try adding header files.

#include <iostream>
#include "add.h"

//int add(int x, int y); //now moved to add.h
 
int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
    return 0;
}