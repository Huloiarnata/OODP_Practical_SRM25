/*Write a C++ program to construct the following pattern, using a nested for loop.
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
#include<iostream>
int main(void){
    for(int i=0;i<5;i++){
        for (int j = 1; j <=i+1; j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
        
    }
    for (int i = 1; i <= 4; i++) {
    for (int j = 0; j < 5 - i; j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
    

    return 0;
}