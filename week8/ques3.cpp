/*
Write a C++ program to calculate the area of rectangle, circle and square using pure virtual
function
*/
#include <iostream>
using namespace std;
class Shape{
    protected:
        int dimension1;
        int dimension2;
    public:
        void getDimension(){
            cin>>dimension1;
        }
        void getDimension(int l,int b){
            dimension1 = l;
            dimension2 = b;
        }
        virtual int area() = 0; //pure virtual function

};
class Rectangle: public Shape{
    public:
    int area(){
        return (dimension1*dimension2);
    }

};
class Circle: public Shape{
    public:
    int area(){
        return (3.14*dimension1*dimension1);
    }

};
class Square: public Shape{
    public:
    int area(){
        return (dimension1*dimension1);
    }
};
int main(void){
    Rectangle rectangle;
    Circle circle;
    Square square;
    int l,b;
    cout<<"Enter Dimensions of rectangle: ";
    cin>>l>>b;
    rectangle.getDimension(l,b);
    cout<<"Area of rectangle is: "<<rectangle.area()<<endl;
    cout<<"Enter radius of circle: ";
    circle.getDimension();
    cout<<"Area of circle is: "<<circle.area()<<endl;
    cout<<"Enter side of square: ";
    square.getDimension();
    cout<<"Area of square is: "<<square.area()<<endl;
    return 0;
}