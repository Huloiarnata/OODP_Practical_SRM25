/*
Write a Function Template in C++ to perform sorting of n items. The items can be of type
int, float, etc.,
*/
#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
void itemInput(int n, T item[]){
    cout<<"Enter items: ";
    for(int i=0;i<n;i++){
        cin>>item[i];
    }
}
template <typename T>
void itemDisplay(int n, T item[]){
    for(int i =0;i<n;i++){
        cout<<item[i]<<" ";
    }
    cout<<endl;
}
int main(void){
    cout<<"Enter number of Items: ";
    int n;cin>>n;
    int item[n];
    float items[n];
    cout<<"Enter item for type integer"<<endl;
    itemInput(n,item);
    cout<<"Enter item for type float"<<endl;
    itemInput(n,items);
    cout<<"Item for type integer are: ";
    itemDisplay(n,item);
    cout<<"Item for type float are: ";
    itemDisplay(n,items);
    sort(item,item+n,greater<int>());
    sort(items,items+n,less<float>());
    cout<<"Item for type integer in sorted are: ";
    itemDisplay(n,item);
    cout<<"Item for type float in sorted are: ";
    itemDisplay(n,items);
    return 0;
}