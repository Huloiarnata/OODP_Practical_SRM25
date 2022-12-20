/*
Write a C++ program to Swap variables using Function Overloading.
*/
#include <iostream>
using namespace std;
class Swap{
    public:
    void swap(int *a ,int *b){
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }
    void swap(float *c,float *d){
        float temp;
        temp = *c;
        *c=*d;
        *d=temp;
    }
}; 
int main(void){
    int num1=10,num2=20;
    float num3=5.00,num4=1.00;
    Swap in,fl;
    cout<<"Before Swapping int: "<<num1<<" , "<<num2<<endl;
    in.swap(&num1,&num2);
    cout<<"After Swapping int: "<<num1<<" , "<<num2<<endl;
    cout<<"Before Swapping float: "<<num3<<" , "<<num4<<endl;
    fl.swap(&num3,&num4);
    cout<<"After Swapping float: "<<num3<<" , "<<num4<<endl;

    
    return 0;
}