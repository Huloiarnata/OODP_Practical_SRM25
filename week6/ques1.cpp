/*
Write a C++ Program to Find the Area of shapes using function and operator overloading
*/
#include<iostream>
using namespace std;
class Area{
    private:
        int l;
        int b;
        int s;
        int r;
    public:
    Area(){
        l=0;
        b=0;
        s=0;
        r=0;
    }
    
    void in_r(){
        int length;
        int breadth;
        cout<<"Enter length & breadth:";
        cin>>length>>breadth;
        l=length;
        b=breadth;
    }
    void in_s(){
        int side;
        cout<<"Enter Side:";
        cin>>side;
        s=side;
    }
    void in_c(){
        int radius;
        cout<<"Enter radius:";
        cin>>radius;
        r=radius;
    }
    int operator ++(){
        int area = l*b;
        return area;
    }
    int operator +(){
        return s*s;
    }
    int operator -(){
        return 3*r*r;
    }

};
int main(){
    int choice;
    cout<<"1)Rectangle\n2)Square\n3)Circle"<<endl<<"Enter choice: ";
    cin>>choice;
    Area rectangle, square,circle;
    switch (choice)
    {
    case 1:
        //Area rectangle;
        rectangle.in_r();
        cout<<"Area of Rectangle is: "<< ++rectangle;
        break;
    case 2:
       // Area square;
        square.in_s();
        cout<<"Area of Square is: "<< +square;
        break;
    case 3:
        //Area circle;
        circle.in_c();
        cout<<"Area of circle is: "<< -circle;
    
    }
    return 0;
}