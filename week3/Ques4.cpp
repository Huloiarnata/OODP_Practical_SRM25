/*
Find whether the student is eligible for the current year placement from the inputs student
name, CGPA, gender (M/F), number of backlogs. Implement the above by using object
oriented programming concept.
*/
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    float cgpa;
    char gender[1];
    int backlogs;

    void isEligible(){
        if(backlogs==0 && cgpa>8.9){
            cout<<"Student is Eligible"<<endl;
        }else{
            cout<<"Student is not Eligible"<<endl;
        }
    }
};

int main(){
    int number;
    cout<<"Enter number of students: ";
    cin>>number;
    Student stud[number];
    cout<<"Enter in format-\n 1)NAME\n 2)CGPA\n 3)GENDER\n 4)BACKLOG\n\n";
    for (int i = 0; i < number; i++)
    {
        cout<<"Enter details: ";
        cin>>stud[i].name>>stud[i].cgpa>>stud[i].gender>>stud[i].backlogs;
        stud[i].isEligible();
    }
    

    return 0;
}