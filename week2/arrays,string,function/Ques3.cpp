/*
Write a program using functions to swap two number’s using call by refrence.
*/
#include<iostream>
void swap(int *,int *);
int main(void){
    int *p,*q;
    int n,m;
    p=&n;q=&m;
    std::cout<<"Enter numbers: ";
    std::cin>>n>>m;
    std::cout<<"Before swap num_1 = "<<n<<" num_2 = "<<m<<std::endl;
    swap(p,q);
    std::cout<<"After swap num_1 = "<<n<<" num_2 = "<<m<<std::endl;
    return 0;
}
void swap(int *num1,int *num2){
    int temp;
    temp= *num1;
    *num1= *num2;
    *num2= temp;

}