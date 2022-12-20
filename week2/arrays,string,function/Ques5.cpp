/*
Write a complete program that prompts the user for the radius of a sphere, and
calculates and prints the volume of that sphere. Use an inline function
sphere Volume that returns the result of the following expression: (4.0 / 3.0 *
3.14159 * pow (radius, 3)).
*/
#include<iostream>
#include <cmath>
using namespace std;
float sphereVolume(int radius);
int main(){
    int radius;
    cout<<"Enter radius of sphere: ";
    cin>>radius;
    float result = sphereVolume(radius);
    cout<<"Volume of sphere of radius = "<<radius<<" = "<<result<<endl;
    return 0;
}
float sphereVolume(int r){
    float vol;
    vol = (4.0 / 3.0 * 3.14159 * pow (r, 3));
    return vol;
}