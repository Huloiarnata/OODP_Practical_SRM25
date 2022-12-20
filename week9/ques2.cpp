/*
Write a program to define the function template for calculating the square of given
numbers with different data types.
*/
#include <iostream>
using namespace std;
template <typename T>
T square(T number){
    return (number*number);
}
int main(){
    cout<<"Enter number to get square: ";
    int n;cin>>n;
    int areai = square<int>(n);
    cout<<"Enter number to get square: ";
    float m;cin>>m;
    float areaf = square<float>(m);
    cout<<"Area is for int: "<<areai<<endl;
    cout<<"Area is for float: "<<areaf<<endl;
    return 0;
}