/*
Write a C++ program to read and print student information using two classes and simple
inheritance.
*/
#include <iostream>
using namespace std;
class Student{
    public:
     string name;
     int age;
     string section;
     int percentage;
     void display(){
        cout<<"Student name: "<<name<<endl;
        cout<<"Student age: "<<age<<endl;
        cout<<"Student section: "<<section<<endl;
        cout<<"Student percentage(%): "<<percentage<<endl;
     }
};
class Details:public Student{
   public:
      Details(void){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter section: ";
        cin>>section;
        cout<<"Enter percentage: ";
        cin>>percentage;
      }
};
int main(void){
   Details stud;
   stud.display();
}