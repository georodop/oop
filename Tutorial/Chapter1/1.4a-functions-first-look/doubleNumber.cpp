#include <iostream>
/*
*Purpose: Write a complete program that reads an integer from the user 
*(using cin, discussed in lesson 1.3a -- A first look at cout, cin, and endl), 
*doubles it using the doubleNumber() function you wrote for question 4, and 
*then prints the doubled value out to the console.
*/

using std::cout;
using std::cin; 
using std::endl;

int doubleNumber(int x)
{
    return 2*x;
}

int main()
{
    int inp;
    cout << "Enter an integer to see double its value: ";
    cin >> inp;
    cout << "The double value of " << inp << " is " << doubleNumber(inp) << endl;
    
    return 0;
}