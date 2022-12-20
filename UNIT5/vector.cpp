#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v; // declaring a vector of type int
    cout<<"vector size: "<<v.size()<<endl; // displaying vector size
    for(int i = 0; i<5; i++){
        v.push_back(2);
    }
    cout<<"Displaying extended vector size: "<<v.size()<<endl; // displaying extended vector size
    //displaying element value of vectors
    for(int i = 0; i<5 ; i++){
        cout<<"vector element ["<<i<<"] value is"<<v[i]<<endl;
    }
    //displaying using iterators
    vector<int>::iterator vp = v.begin();
    while(vp != v.end()){
        cout<<"vector element value is"<< *vp <<endl;
        vp++;
    }


    return 0;
}