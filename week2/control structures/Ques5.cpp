/*
Write a program to find Reverse a number Using Recursion in C++.
*/
#include <iostream>
int sum=0;
int r;
int reverse(int num);
int main(void){
    int num;
    std::cout<<"Enter number: ";
    std::cin>>num;  
    std::cout<<reverse(num)<<std::endl;
    return 0;
}
int reverse(int num){
    if(num!=0){
        r=num%10;
        sum=sum*10+r;
        reverse(num/=10);
    }else{
        return sum;
    }
    return sum;
}