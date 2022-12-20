/*
Define a class named Circle which can be constructed by a radius. The Circle class has two
methods for computing perimeter and area, respectively.
*/
#include <iostream>
#include <cmath>
class Circle{
    public:
       int radius;
    int perimeter(){
        return (2*3.14*radius);
    }
    int area(){
        return (3.14*pow(radius,2));
    }
};
int main(void){
    Circle circle;
    std::cout<<"Enter radius: ";
    std::cin>>circle.radius;
    std::cout<<"Perimeter of circle is: "<<circle.perimeter()<<std::endl<<"Area of circle is: "<<circle.area()<<std::endl;

    return 0;
}