/*
Write a C++ Program with three different functions with same name to find the sum of
digits using function overloading.
*/
#include <iostream>
using namespace std;
class Sum{
    public:
    void sum(int a,int b){
        int sum = a+b;
        cout<<"Sum for integer :"<<sum<<endl;
    }
    void sum(float a,float b){
        float sum = a+b;
        cout<<"Sum for float :"<<sum<<endl;

    }
    void sum(double a,double b){
        double sum = a+b;
        cout<<"Sum for double :"<<sum<<endl;

    }
};
int main(void){
    int p=5,q=90;
    float r=22,s=3.14;
    double t=23.01,u=44.008;
    Sum in,fl,db;
    in.sum(p,q);
    fl.sum(r,s);
    db.sum(t,u);
    return 0;
}