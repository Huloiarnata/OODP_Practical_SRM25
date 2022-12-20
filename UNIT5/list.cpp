#include <iostream>
#include <list>
using namespace std;
int main(void){
    list<int> lis;
    for (int i = 0; i < 5; i++)
    {
        lis.push_front(i);
    }
    for (int i = 1; i < 5; i++)
    {
        lis.push_back(9);
    }
    int size = lis.size();
    list<int>::iterator l = lis.begin();
    for(int i = 0;i<size;i++){
        cout<< *l << " ";
        l++;
    }
    cout<<endl;
    lis.pop_front();
    size = lis.size();
    l = lis.begin();
    for(int i = 0;i<size;i++){
        cout<< *l << " ";
        l++;
    }
    cout<<endl;
    cout<<"Front value: "<<lis.front()<<endl; // 3
    cout<<"Back value: "<<lis.back()<<endl; //9
    
    return 0;
}