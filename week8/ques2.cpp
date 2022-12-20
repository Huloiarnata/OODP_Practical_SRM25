/*
Write a C++ program to Add members of two different classes using friend functions
*/
#include <iostream>
using namespace std;
class B;
class A{
    public:
        A(): numA(24){}
    private:
        int numA;
        friend int add(A,B);
};
class B{
    public:
        B(): numB(26){}
    private:
        int numB;
        friend int add(A,B);
};
int add(A objA,B objB){
    return(objA.numA+objB.numB);
}
int main(void){
    A a;
    B b;
    cout<<"Sum is : "<<add(a,b)<<endl;
    return 0;
}