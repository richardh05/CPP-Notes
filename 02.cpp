// Created by richard on 20/10/24.
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

class Circle
{
private:
    double radius;
public:
    Circle():radius(0){}
    void setRadius(double rad){radius=rad;};
    double getRadius() {return radius;}
    double getArea() {return radius*radius*3.1415;}
    double getCircumference() {return 2*3.1415*radius;}
    double getDiameter() {return 2*radius};
    void scale(double factor);
};

void Circle::scale(double factor){
    radius *= factor;
}
void Circle2() {
    setRadius()
}