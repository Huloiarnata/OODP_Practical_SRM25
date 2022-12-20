/*
Write a program that would print the information (name, year of joining, salary, address)
of three employees by creating a class named &#39;Employee&#39;. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- Walls Street
Sam           2000        68D- Walls Street
John          1999        26B- Walls Street
*/
#include <iostream>
using namespace std;
class Employee{
    public:
    string name;
    int joining_year;
    string address;
};
int main(){
    Employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Details: "<<endl;
        cin>>emp[i].name>>emp[i].joining_year>>emp[i].address;
    }
    cout<<"Name     year of joining    address"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<emp[i].name<<"\t  "<<emp[i].joining_year<<"\t\t\t "<<emp[i].address<<endl;
    }
    
    

}