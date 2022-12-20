/*
Write a program using functions to swap two number’s using call by value.
*/
#include <iostream>
int swap(int num1,int num2);
int main(void){
  int num1,num2;
  std::cout<<"Enter number 1 & number 2: ";
  std::cin>>num1>>num2;
  std::cout<<"Before Swapping: number1="<<num1<<" number2="<<num2<<std::endl;
  int status=swap(num1,num2);
  if(status==1){
    std::cout<<"Numbers swapped succesfully"<<std::endl;
    std::cout<<"After swap() is called value in main: number1="<<num1<<" number2="<<num2<<std::endl;
  }else{
    std::cout<<"Swapping failed"<<std::endl;
  }
  return 0;
}
int swap(int n,int m){
int temp;
temp=n;
n=m;
m=temp;
if(m!=temp){
  return 0;
}else{
  
  std::cout<<"After Swapping: number1="<<n<<" number2="<<m<<std::endl;
  return 1;
}

}