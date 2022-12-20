/*
Create a class named &#39;Student&#39; with a string variable &#39;name&#39; and an integer variable
&#39;roll_no&#39;. Assign the value of roll_no as &#39;2&#39; and that of name as &quot;John&quot; by creating an object of
the class Student.
*/
#include<iostream>
class Student{
    public:
       std::string name;
       int roll_no;
};
int main(void){
    Student student1;
    student1.name="John";
    student1.roll_no=2;
    std::cout<<student1.name<<std::endl;
    std::cout<<student1.roll_no<<std::endl;
    return 0;
}