/*
Write a C++ program to demonstrate throw an exception for division by zero condition.
*/
#include <iostream>
using namespace std;
int division(int num,int den){
    return (num/den);
}
int main(void){
    cout<<"Enter num & Denom: ";
    int n,d,result;cin>>n>>d;
    try{
        if(d == 0){
            throw d;
        }
        result = division(n,d);
    }catch(int e){
        cout<<"Division by zero not allowed"<<endl;
    }
    
    cout<<"Division Result is: "<<result<<endl;
    return 0;
}