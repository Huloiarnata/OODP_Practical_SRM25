/*
Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other classes named Apples and Mangoes to calculate the number of apples and
mangoes in the basket. Print the number of fruits of each type and the total number of fruits
in the basket.
*/
#include <iostream>
using namespace std;
class Apples{
    public:
        int a;
        Apples(void){
            cout<<"Enter number of apples: ";
            cin>>a;
        }
        int count_a(){
            return a;
        }
};
class Mangoes{
    public:
    int m;
        Mangoes(void){
            cout<<"Enter number of mangoes: ";
            cin>>m;
        }
        int count_m(){
            return m;
        }
};
class Fruit:public Apples,public Mangoes{
    public:
        int total;
        int apple;
        int mangoe;
        Fruit(void):Mangoes(),Apples(){
            apple = count_a();
            mangoe = count_m();
            total = apple + mangoe;
        }
        void display(){
            cout<<"Number of apples: "<<apple<<endl;
            cout<<"Number of mangoes: "<<mangoe<<endl;
            cout<<"Total number of fruits: "<<total<<endl;
        }
};

int main(){
    Fruit fruit;
    fruit.display();
    return 0;
}