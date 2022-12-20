/*
Write a C program to find the size of the union
*/
#include <iostream>
int main(void){
    union student{
        char name[10];
        char section;
        int age;
        long int mobile;
    };
    std::cout<<"Size of union is: "<<sizeof(student)<<std::endl;

    return 0;
}