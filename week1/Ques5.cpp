/*
Write function that take a string then reverse it.
Sample String: &quot;1234abcd&quot; Expected Output: &quot;dcba4321
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void Reverse(string s);
int main(void){
    string s;
    cin>>s;
    int size =s.length();
    for (int i = 0; i < floor(size/2); i++)
    {
        char temp;
        temp=s[i];
        cout<<"temp: "<<temp<<endl;
        s[i]=s[size-1-i];
        s[size-1-i]=temp;

    }
    cout<<"Reversed string is: "<<s<<endl;
    
    return 0;
}