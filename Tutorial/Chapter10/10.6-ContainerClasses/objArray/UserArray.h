//Purpose: Following the example of IntArray from learncpp.com, I'm testing
//the concept of an array with custom type objects
#ifndef USERARRAY_H
#define USERARRAY_H

#include <cassert>

bool randomBoolWithProb(double probability)
{
    assert(probability>=0 && probability<=1);
    
    return rand()/(RAND_MAX+1.0) < probability;
}


// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

// Returns randomly true with a given probability between 0 and 1
// Assumes srand() has already been called
class User
{
private:
    bool hasLaptop;
    bool hasTablet;
    bool hasSmartPhone;
    int target;
    
public:
    User():
        hasLaptop(randomBoolWithProb(0.6)),
        hasTablet(randomBoolWithProb(0.3)),
        hasSmartPhone(randomBoolWithProb(0.8)),
        target(getRandomNumber(2, 10))
    {
        std::cout << "New User " 
                    << hasLaptop << "\n";
    }
};
 
class UserArray
{
private:
    User *m_data;
    int m_length;
    
public:
    //Constructor that creates an empty array
    UserArray():
        m_length(0), m_data(nullptr)
    {
    }
    
    //Constructor that creates an array of predetermined size
    UserArray(int length):
        m_length(length)
    {
        m_data = new User[length];
        std::cout << "User array created \n";
    }
    
    //Destructor
    ~UserArray()
    {
        delete[] m_data;
        //we don't need to set m_data to null or m_length to 0 here, since the 
        //object will be destroyed immediately after this function anyway
    }
    
    void erase()
    {
        delete[] m_data;
        
        //Object is not destroyed so m_data would point to deallocated memory
        m_data = nullptr;
        m_length = 0;
    }
    
    
    
};
 
#endif