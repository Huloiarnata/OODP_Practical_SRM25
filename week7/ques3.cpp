/*
Write a C++ Program to find area and volume using multiple inheritance.
*/
#include <iostream>
using namespace std;
class Area{
    public:
        int area(int l,int b){
            return l*b;
        }
};
class Volume{
    public:
    int volume(int l,int b,int h){
        return l*b*h;
    }

};
class Shape:public Area,public Volume{
    public:
        int length;
        int breadth;
        int height;
        int ar;
        int vol;
    public:
    Shape(){
        cout<<"Enter Length: ";
        cin>> length;
        cout<<"Enter Breadth: ";
        cin>> breadth;
        cout<<"Enter height: ";
        cin>> height;
        ar = area(length,breadth);
        vol = volume(length,breadth,height);
    }
    void display(){
        cout<<"Area is: "<<ar<<endl;
        cout<<"Vol is: "<<vol<<endl;
    }
};
int main(void){
    Shape s1;
    s1.display();
    return 0;
}