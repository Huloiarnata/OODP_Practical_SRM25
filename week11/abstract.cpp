#include <iostream>
using namespace std;
class Shape{
    protected: 
        int length;
        int breadth;
    public:
        virtual int parameter() = 0;
        void set_b(int b){
            breadth = b;
        }
        void set_l(int l){
            length = l;
        }
};
class Rectangle: public Shape{
    public:
        int perimeter(){
            return (2*(length*breadth));
        }
};
class Square: public Shape{
    public:
        int perimeter(){
            return (2*(length*2));
        }
};
int main(){
    Rectangle R;
    Square S;

    return 0;
}