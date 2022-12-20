/*
Ram and shiva are working as accountants in bank. They need to know all the arithmetic
operations to verify the accounts. Since they are weak in mathematics, they found difficulty
in doing such arithmetic operations. Help them to check accounts by applying arithmetic
operations including add, subtract, multiply and divide using class template.
*/
#include <iostream>
using namespace std;
template <class T>
class Operation{
    private: 
        T num1;
        T num2;
    public: 
        void setNum(T x,T y){
            num1 = x;
            num2 = y;
        }
        T add(){
            return (num1+num2);
        }
        T sub(){
            return (num1-num2);
        }
        T mul(){
            return (num1*num2);
        }
        T div(){
            return (num1/num2);
        }
};
int main(void){
    Operation<int> o;
    Operation<float> p;
    o.setNum(5,4);
    cout<<"Addition: "<<o.add()<<" Subtraction: "<<o.sub()<<" Multiplication: "<<o.mul()<<" Division: "<<o.div()<<endl;
    p.setNum(5.4,2.2);
    cout<<"Addition: "<<p.add()<<" Subtraction: "<<p.sub()<<" Multiplication: "<<p.mul()<<" Division: "<<p.div()<<endl;



    return 0;
}