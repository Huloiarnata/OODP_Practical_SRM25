/*
Write a program to find the prime numbers between100 to 500.
 */

#include <iostream>
#include <cmath>
bool isPrime(int num);
int main(void){
    for (int i = 100; i <=500; i++)
    {
        bool state = isPrime(i);
        if(state==true){
            //It's a prime number 
            std::cout<<i<<std::endl;
        }else{
            //Not a Prime number
            continue;
        }
    }
    return 0;
}
bool isPrime(int num){
    bool counter=false;
    for (int i = 2; i < floor(num/2); i++)
    {
        if(num==0){
            counter = true;
            break;
        }
        if(num%i==0){
            counter = false;
            break;
        }
        else{
            counter = true;
        }
    }
    return counter;
    
}