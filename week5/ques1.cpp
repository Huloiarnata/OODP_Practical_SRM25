/*Write a program to print the names of students by creating a Student class. If no
name is passed while creating an object of the Student class, then the name should
be &quot;Unknown&quot;, otherwise the name should be equal to the String value passed while
creating the object of the Student class.*/
#include <iostream>
class Student{
    private:
        std::string name;
    public:
        Student(){
            name="Unknown";
        }
        Student(std::string Name){
            name=Name;
        }
        std::string getName(){
            return name;
        }
};
int main(){
    Student stud1;
    Student stud2("Ronit");
    std::cout<<"Name of Student 1: "<<stud1.getName()<<std::endl;
    std::cout<<"Name of Student 2: "<<stud2.getName()<<std::endl;
}