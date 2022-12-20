/*
Write a C++ program to create a file.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char ch[100];
    cout<<"Enter your name and age: ";
    cin.getline(ch,100);
    ofstream myfile("test.txt");
    myfile<<ch;
    myfile.close();
    cout<<"File write performed succesfully"<<endl<<endl;
    return 0;
}