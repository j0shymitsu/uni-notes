// Task:
// 

#include <iostream>
using namespace std;

double radius(double circumference);

int main()
{
    double circ_2p = 2.5;
    double radius_2p = radius(circ_2p);

    Circle c;
    c.setRadius(4.0);
    cout << c.getArea() << ", " << c.getCircumference() << endl;
    c.scale(0.5);

    return 0;
}

double radius(double circumference)
{
    // scope
    return circumference / (2 * 3.1415);
}

class Circle
{
    private:
        double radius;
    public:
        Circle():radius(0){}
        Circle(double rad) : radius(rad) {}
        void setRadius(double rad);
        double getRadius() { return radius; };
        double getArea() { return 3.141 * (radius* radius); };
        double getCircumference() { return 2 * 3.141 * radius; };
        double getDiameter() { return radius * 2; };
        void scale(double factor);

    
};  // class declarations require semi colon

void Circle::scale(double factor)
{
    radius *= factor;
}