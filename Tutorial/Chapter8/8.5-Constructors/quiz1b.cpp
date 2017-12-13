/*******************************************************************************
 * 1b)Update your answer to the previous question to use constructors with 
 * default parameters. Use as few constructors as possible.
/*******************************************************************************
 * 1) Write a class named Ball. Ball should have two private member variables
 * with default values: m_color (“Black”) and m_radius (10.0). Ball should
 * provide constructors to set only m_color, set only m_radius, set both, or set
 * neither value. For this quiz question, do not use default parameters for your
 * constructors. Also write a function to print out the color and radius of the 
 * ball. 
 * 
 * The following sample program should compile:
	
 * int main()
 * {
 *         Ball def;
 *         def.print();
 *  
 * 	Ball blue("blue");
 * 	blue.print();
 * 	
 * 	Ball twenty(20.0);
 * 	twenty.print();
 * 	
 * 	Ball blueTwenty("blue", 20.0);
 * 	blueTwenty.print();
 *  
 *     return 0;
 * }
 * 
 * and produce the result:
 * 
 * color: black, radius: 10
 * color: blue, radius: 10
 * color: black, radius: 20
 * color: blue, radius: 20
 ******************************************************************************/ 
#include <iostream> 
#include <string>
 
class Ball
{
	std::string m_color;
	double m_radius;
	
public:
	//Handles calls giving: no parameter at all, both parameters, only color
	Ball(const std::string color = "Black", const double radius = 10.0)
	{
		m_color = color;
		m_radius = radius;
	}
	
	//Handles cases where only radius is provided
	Ball(double radius)
	{
		m_color = "Black";
		m_radius = radius;
	}
	
	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius << "\n";
	}
	
};
 
int main()
{
    Ball def;
    def.print();
 
	Ball blue("blue");
	blue.print();
	
	Ball twenty(20.0);
	twenty.print();
	
	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();
 
    return 0;
}
 