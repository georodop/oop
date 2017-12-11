/* Purpose:
 * Write a program that asks the user to enter a single digit integer. If the user
 * enters a single digit that is prime (2, 3, 5, or 7), print “The digit is prime”.
 * Otherwise, print “The digit is not prime”.
 */
 
#include <iostream>

int main()
{
    //Ask user input (a single digit integer)
    //int input = getIntFromUser();
    
    //Check if the input is a single digit prime
    //bool isSingleDigitPrime = singleDigitPrimeCheck(input);
    bool isSingleDigitPrime{ false }; 
    
    
    //Print "The digit is prime" if it is or "The digit is not prime" if not
    std::cout << (isSingleDigitPrime ? "The digit is prime" : "The digit is not prime") << std::endl;

    return 0;
}