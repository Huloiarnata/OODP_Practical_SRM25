/*
Write a program to find factorial of a given number using Recursion
*/
#include <iostream>
int factorial(int number);
int main(void){
    int number;
    std::cout<<"Enter number: ";
    std::cin>>number;
    int fact = factorial(number);
    std::cout<<fact<<std::endl;
    return 0;
}
int factorial(int number){
    if(number==0){
        return 1;
    }else{
        return number*factorial(number - 1);
    }
}