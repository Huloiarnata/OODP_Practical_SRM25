/*
Write a C program to store information of n students using structure
*/
#include<iostream>
struct student
    {
        std::string name;
        int age;
        long long int mobile;
        std::string stud_id;
    };
int main(){
    int n;
    std::cout<<"Enter number of students: ";
    std::cin>>n;
    student array[n];
    std::cout<<"Enter in following order\nname\nstudent id\nage\nmobile number"<<std::endl;
    for (int i = 0; i < n; i++)
    {   
        std::cin>>array[i].name;
        std::cin>>array[i].stud_id;
        std::cin>>array[i].age;
        std::cin>>array[i].mobile;

    }
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Information of student "<<i<<std::endl;
        std::cout<<array[i].name<<std::endl<<array[i].stud_id<<std::endl<<array[i].age<<std::endl<<array[i].mobile<<std::endl;
    }
    
    
    
}