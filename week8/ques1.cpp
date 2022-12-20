/*
Write a C++ program to demonstrate the use of virtual function
*/
#include <iostream>
using namespace std;
class Student{
    public:
        virtual void introduce(){
            cout<<"Hey! This is Ronit Kumar"<<endl;
        }
};
class Details:public Student{
    public:
        void introduce(){
            cout<<"Reg Num: RA2111032010009\nBranch: CSE w/s IOT"<<endl;
        }
};
int main(void){
    Student *student;
    Details details;
    student = &details;
    student->introduce();
    return 0;
}