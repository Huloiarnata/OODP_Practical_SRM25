#include <iostream>
using namespace std;
class Complex{
    public:
        int real;
        int img;
    public:
        Complex(): real(0),img(0){};
        void input(){
            cout<<"Enter real and imagenary parts respectively: "<<endl;
            cin>>real;
            cin>>img;
        }
        Complex operator - (Complex c2){
            Complex temp;
            temp.real = real - c2.real ;
            temp.img = img - c2.img;
            return temp;
        }
        void output(){
            cout<<"Result is: "<<real<<"+"<<img<<"i"<<endl;
        }
};
int main(void){
    Complex c1,c2,result;
    cout<<"Enter first complex number: "<<endl;
    c1.input();
    cout<<"Enter second complex number: ";
    c2.input();
    result = c1-c2;
    result.output();

    return 0;
}