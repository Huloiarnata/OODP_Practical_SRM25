/*
Write a C++ program to read and print employee information using multiple inheritance.
*/
#include <iostream>
using namespace std;
class Employee_Data{
    public: 
        string name;
        int age;
        string id;
};
class Employee_Financial{
    public:
        long long int salary;
        int bonus;
};
class Employee: public Employee_Data,public Employee_Financial{
    public:
    Employee(void){
        cout<<"Enter Employee name ";
        cin>>name;
        cout<<"Enter Employee age ";
        cin>> age;
        cout<<"Enter Employee id ";
        cin>>id;
        cout<<"Enter Employee salary ";
        cin>>salary;
        cout<<"Enter Employee bonus ";
        cin>>bonus;
    }
    void display(){
        cout<<"Employee name: "<<name;
        cout<<"Employee age: "<<age;
        cout<<"Employee id: "<<id;  
        cout<<"Employee salary: "<<salary;    
        cout<<"Employee bonus: "<<bonus;
    }
};
int main(void){
    Employee e;
    e.display();
    return 0;
}