/*
Develop a program of class Room with attributes length, breadth and height and its object
room1 and room2 to calculate the area and volume of a room using function.
*/
#include <iostream>
class Room{
    public: 
       int length;
       int breadth;
       int height;

       int area(){
        return length*breadth;
       }
       int volume(){
        return length*breadth*height;
       }

};
int main(void){
    Room room1,room2;
    std::cout<<"Enter length, breath, height of room1: ";
    std::cin>>room1.length>>room1.breadth>>room1.height;
    std::cout<<"Area of room1 is: "<<room1.area()<<std::endl<<" Volume of room1 is: "<<room1.volume()<<std::endl;
    std::cout<<"Enter length, breath, height of room2: ";
    std::cin>>room2.length>>room2.breadth>>room2.height;
    std::cout<<"Area of room1 is: "<<room2.area()<<std::endl<<" Volume of room1 is: "<<room2.volume()<<std::endl;
    return 0;
}