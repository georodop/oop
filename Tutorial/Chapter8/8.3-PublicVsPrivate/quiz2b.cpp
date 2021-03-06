/*******************************************************************************
 * (2b)
 * Add a function named isEqual() to your Point3d class. The following code 
 * should run correctly:
 * 
 * int main()
 * {
 *     Point3d point1;
 *     point1.setValues(1.0, 2.0, 3.0);
 *  
 *     Point3d point2;
 *     point2.setValues(1.0, 2.0, 3.0);
 *  
 *     if (point1.isEqual(point2))
 *         std::cout << "point1 and point2 are equal\n";
 *     else
 *         std::cout << "point1 and point2 are not equal\n";
 *  
 *     Point3d point3;
 *     point3.setValues(3.0, 4.0, 5.0);
 *  
 *     if (point1.isEqual(point3))
 *         std::cout << "point1 and point3 are equal\n";
 *     else
 *         std::cout << "point1 and point3 are not equal\n";
 *  
 *     return 0;
 * }
 * 
/*******************************************************************************
 * 
 * (2a)
 * Write a simple class named Point3d. The class should contain:
 * Three private member variables of type double named m_x, m_y, and m_z;
 * A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
 * A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>
 
 * Make sure the following program executes correctly:
 
 * int main()
 * {
 *     Point3d point;
 *     point.setValues(1.0, 2.0, 3.0);
 *  
 *     point.print();
 *  
 *     return 0;
 * }
 *  
 *  
 * This should print:
 * 
 * <1, 2, 3>
 * 
 ******************************************************************************/
 
#include <iostream>

class Point3d
{
    double m_x;
    double m_y, m_z;
    
public:
    void setValues(double x, double y, double z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    
    void print()
    {
        std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
    }
    
    bool isEqual(Point3d &point)
    {
       return (m_x == point.m_x && m_y == point.m_y && m_z == point.m_z);
    }
};


int main()
{
    Point3d point1;
    point1.setValues(1.0, 2.0, 3.0);
 
    Point3d point2;
    point2.setValues(1.0, 2.0, 3.0);
 
    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";
 
    Point3d point3;
    point3.setValues(3.0, 4.0, 5.0);
 
    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";
 
    return 0;
}
