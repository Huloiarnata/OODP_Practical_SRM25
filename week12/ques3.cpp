/*
Write a C++ program to write and read text in /from file.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(void){
    char a[10],ar[10];
    cin.getline(a,10);
    ofstream file("two.txt");
    file<<a;
    file.close();
    cout<<"File write performed succesfully"<<endl<<endl;
    ifstream obj("two.txt");
    obj.getline(ar,10);
    cout<<ar<<endl;
    obj.close();
    cout<<"File read performed succesfully"<<endl<<endl;

    return 0;
}