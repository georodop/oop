//Purpose: Just playing with the debugger
#include <iostream>

void printValue(int nValue)
{
    std::cout << nValue;
}

int main()
{
    int x =1;
    std::cout << x << " ";
 
    x = x + 1;
    std::cout << x << " ";
 
    x = x + 2;
    std::cout << x << " ";
 
    x = x + 4;
    std::cout << x << " ";
    
    
    int a = 10;
    int b = 5;
    int result;
    std::cout << a << " / " << b << " = "; // division by 0 is undefined
    result = a/b;
    printValue(result);
    return 0;
}