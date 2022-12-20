/*
Write a function take three numbers from user then output the minimum number.
*/

#include<iostream>
using namespace std;
int minimum(int a[]);
int main(void){
    int num[3];
    cout<<"Enter three numbers: ";
    for(int i=0;i<3;i++){
        cin>>num[i];
    }
    int min = minimum(num);
    cout<<"Minimum number is: "<<min<<endl;
    
    return 0;
}
int minimum(int num[]){
    int min = num[0];
    for (int i = 1; i < 3; i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        }
        
    }
    return min;
}