/*Create a class to print the area of a square and a rectangle. The class has two
functions with the same name but different number of parameters. The function for
printing the area of rectangle has two parameters which are its length and breadth
respectively while the other function for printing the area of square has one
parameter which is the side of the square.*/
#include <iostream>
using namespace std;
class Area{
    private:
        float side;
        float length;
        float width;
    public:
        float area(float Side){
            side=Side;
            float area = side*side;
            return area;

        }
        float area(float Length,float Width){
            length = Length;
            width = Width;
            float area = length*width;
            return area;
        }
};
int main(void){
    Area square;
    Area rectangle;
    std::cout<<"Area of Square: "<<square.area(4)<<std::endl;
    std::cout<<"Area of Rectangle: "<<rectangle.area(5,5)<<std::endl;

}