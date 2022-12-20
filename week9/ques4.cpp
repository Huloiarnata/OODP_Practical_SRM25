/*
Write a program to illustrate how to define and declare a class template for reading two
data items from the keyboard and to find their sum.
*/
#include <iostream>
using namespace std;
template <class T>
class Sum{
    private:
        T x;
        T y;
    public:
        void setNum(T X,T Y){
            x= X;
            y= Y;
        }
        T getSum(){
            return(x+y);
        }

};
int main(void){
    Sum<int> sum;
    sum.setNum(4,5);
    int s = sum.getSum();
    cout<<"Sum is: "<<s<<endl;

    return 0;
}