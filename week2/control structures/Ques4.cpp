/*
Write a program to find Fibonacci series Using Recursion in C++.
*/
#include <iostream>
int fibonacci(int number);
int main(void){
    int limit;
    std::cout<<"Enter Limit: ";
    std::cin>>limit;
    for (int i = 0; i < limit; i++)
    {
        std::cout<<fibonacci(i);
    }
    
    
    std::cout<<std::endl;
    return 0;
}
int fibonacci(int number){
    if(number == 0 || number==1){
        return 1;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);
}