#include<iostream>
#include<stack>
using namespace std;
int main(void){
    stack<int> stack;
    stack.empty()?cout<<"stack empty"<<endl:cout<<"Stack not Empty"<<endl;
    cout<<"Initial Size: "<<stack.size()<<endl;
    for (int i = 0; i < 5; i++)
    {
        stack.push(i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<stack.top()<<endl;
        stack.pop();
    }
    
    

    return 0;
}