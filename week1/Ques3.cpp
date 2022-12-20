/*Write a C++ program to sum of two given integers. However, if the sum is
between 105 to 200 it will return 200.*/
#include <iostream>
using namespace std;
int summation(int a,int b);
int main(void){
    int num1,num2;
    cout<<"Enter numbers: "<<endl;
    cin>>num1>>num2;
    int result = summation(num1,num2);
    cout<<"Result: "<<result<<endl;    
    return 0;
}
int summation(int a,int b){
    int sum =a+b;
    if(sum>105 && sum<200){
        return 200;
    }
    else{
        return sum;
        }
}