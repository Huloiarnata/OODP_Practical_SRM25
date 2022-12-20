#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    int i;

    for ( i = 0; i < 5; i++)
    {
        dq.push_back(i);
    }
    deque<int>::iterator d = dq.begin();
    for(i=0;i<5;i++){
        cout<<"value at "<<i<<": "<<*d<<endl;;
        d++;
    }
    
    return 0;
}