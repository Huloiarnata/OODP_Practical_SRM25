#include<iostream>
#include<array>
using namespace std;
int main(void){
    array<int,5> a = {1,2,3,4,7};
    // using at() method
    for (int i = 0; i < 5; i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    
        cout<<get<0>(a)<<" ";
    
    
    return 0;
}