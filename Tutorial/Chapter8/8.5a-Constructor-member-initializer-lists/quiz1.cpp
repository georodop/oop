/*******************************************************************************
 * 1) Write a class named RGBA that contains 4 member variables of type 
 * std::uint8_t named m_red, m_green, m_blue, and m_alpha (#include cstdint to 
 * access type std::uint8_t). Assign default values of 0 to m_red, m_green, and 
 * m_blue, and 255 to m_alpha. Create a constructor that uses a member 
 * initializer list that allows the user to initialize values for m_red, m_blue,
 * m_green, and m_alpha. Include a print() function that outputs the value of 
 * the member variables.
 * ****************************************************************************/
 
#include <iostream>
#include <cstdint>

class RGBA
{
private:     
    std::uint8_t m_red, m_green, m_blue, m_alpha;
    
public:
    //Default constructor
    //RGBA():m_red(0), m_green(0), m_blue(0), m_alpha(255){ }

    //Constructor that lets the user initialize the values
    RGBA(uint8_t red=0, uint8_t green=0, uint8_t blue=0, uint8_t alpha=255)
        :m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
    {
        
    }
    
    void print()
    {
        std::cout << "R= " << static_cast<int>(m_red) 
                << ", G= " << static_cast<int>(m_green) 
                << ", B= " << static_cast<int>(m_blue) 
                << ", A= " << static_cast<int>(m_alpha) << "\n";
    }
};

int main()
{
    //RGBA test;
    //test.print();
    
    RGBA teal(0, 127, 127);
	teal.print();
    return 0;
}