/*
Develop an abstract class polygon from which derive triangle and rectangle classes. Each
polygon should contain the function area() to calculate the area of them. Invoke the function
area() to calculate the area using pointer of base class.
*/
#include<iostream>
using namespace std;
class Polygon{
    protected:
        int dimension1;
        int dimension2;
    public:
        void getDimension(int h,int b){
        dimension1 = h;
        dimension2 = b;
        }
        virtual int area() = 0;

};
class Triangle: public Polygon{
    public:
    int area(){
    return (0.5*dimension1*dimension2);
    }
};
class Rectangle: public Polygon{
    int area(){
    return (dimension1*dimension2);
    }
};
int main(void){
    Polygon *polygon;
    Triangle triangle;
    Rectangle rectangle;

    polygon = &triangle;

    cout<<"Enter dimensions of triangle: ";
    int height,base;
    cin>>height>>base;

    polygon->getDimension(height,base);
    int area = polygon->area();
    cout<<"Area of Triangle is: "<<area<<endl;
    polygon = &rectangle;

    cout<<"Enter dimensions of Rectangle: ";
    int length,breadth;
    cin>>length>>breadth;
    polygon->getDimension(length,breadth);
    int areaRectangle = polygon->area();
    cout<<"Area of Rectangle is: "<<areaRectangle<<endl;
    return 0;
}