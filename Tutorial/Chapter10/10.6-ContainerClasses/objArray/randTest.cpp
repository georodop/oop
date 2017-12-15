//Purpose: Test various (non stl) options for random number generation
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cassert>

using std::cout;
using std::endl;


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
bool randomBoolWithProb(double probability)
{
    assert(probability>=0 && probability<=1);
    
    return rand()/(RAND_MAX+1.0) < probability;
}


int main()
{
    srand(time(0));
    //int randomval = rand() % 101;
    
    //int randomval = getRandomNumber(0, 10);
    int j(1);
    for(int i=1; i<100000; i++)
    {
        if (randomBoolWithProb(0.999))
        {
           j++; 
        }
    }
    //cout << randomval << endl;
    cout << j << endl;
    
    return 0;
}
