/*
Write a C++ program to find the largest element of a given array of integers
*/
#include <iostream>
int main(void){
    int size;
    std::cout<<"Enter size: ";
    int a[size];
    for (int i = 0; i < size; i++)
    {
        std::cin>>a[i];
    }
    int max=a[0];
    for (int i = 1; i < size; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
        

    }
    std::cout<<max;
    
    return 0;
}
