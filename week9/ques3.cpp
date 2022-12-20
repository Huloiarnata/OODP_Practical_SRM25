/*
Write a C++ program to illustrate overloading of template function using an explicit
function.
*/
#include <iostream>
using namespace std;
template <typename T>
void display(T x){
    cout<<"Template display: "<<x<<endl;
}
void display(int x){
    cout<<"Explicit function display: "<<x<<endl;
}
int main(){
    display(12.5);
    display(1);
    return 0;
}