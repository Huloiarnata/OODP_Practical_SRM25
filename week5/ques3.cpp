/*
Create a class Degree; having a function ;getDegree; that prints &quot;I got a degree&quot;. It has
two subclasses namely &#39;Undergraduate&#39; and &#39;Postgraduate&#39; each having a function
with the same name that prints &quot;I am an Undergraduate&quot; and &quot;I am a Postgraduate&quot;
respectively. Call the function by creating an object of each of the three classes.
*/
#include <iostream>
using namespace std;
class Degree{
    public:
    void getDegree(){
        cout<<"I got a degree"<<endl;
    }
};
class Undergraduate:public Degree{
    public:
    void getDegree(){
        cout<<"I am an Undegradudate"<<endl;
    }
    
};
class Postgraduate:public Degree{
    public: 
    void getDegree(){
        cout<<"I am a Postgraduate"<<endl;
    }
};
int main(void){
    Degree degree;
    Undergraduate ug;
    Postgraduate pg;
    degree.getDegree();
    ug.getDegree();
    pg.getDegree();
    return 0;
}