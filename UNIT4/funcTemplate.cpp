/*
Template -> These are powerful tools and are base for generic programming in cpp.
         -> Here the code is independent of any particular type(as in data type)
         -> These are blueprint.
         -> Template are of two types
            : function template
            : Class template
        ->  we use two keyword typename & template while T is the placeholder for datatype.

Function Template:
         -> They can operate with generic type
         -> It allows us to create a funciton template which can be adapted to more than one data type.
         -> it reduces the code size. 
         -> Here data types are passed as a parameter
         -> It can be used for different data types
         -> Declaration : template <typename T> 
            Calling : function_name<data_type>(param1,param2);
         -> for different data types 
            Declaration : template<typename T,typename U>
            calling : function_name<dataType1,dataType2>(param1,param2)

*/
#include <iostream>
using namespace std;
template <typename T, typename U>
U add(T x, U y){
    return (x+y);
}
int main(void){
    cout<<"Sum of two number 4 & 3.5 is: "<<add<int,float>(4,3.5)<<endl;
    return 0;
}