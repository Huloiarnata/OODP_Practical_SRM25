/*
Write a program in C++ to convert a decimal number into binary without using an
array and using the constructor and destructor.
Sample Output
Please enter Decimal number: 8
binary number = 1000
*/
#include <iostream>
using namespace std;
class Converter{
   public: 
    int decNum,binary,i,j;
    public:
     Converter(){
        //Constructor invoked
        binary=0;
        cout<<"Enter Decimal number: ";
        cin>>decNum;
        i=1;
	     j=decNum;
	do
	{
		binary=binary+(decNum%2)*i;
		i=i*10;
		decNum=decNum/2;
		j=j/2;
	}
	while(j>0);
   cout<<binary;
     }
     ~Converter(){
        //destructor invoked
     }
};
int main(){
   Converter converter;
    return 0;
}