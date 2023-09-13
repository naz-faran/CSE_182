/*Write a C++ program to find the diameter, circumference,
and area of a circle using functions.*/

#include<iostream>
using namespace std;

#define PI 3.1426;

void diameter(int r){
    cout<<"Diameter of the circle is "<<2*r<<endl;
}
void circumference(int r){
    float i= 2* (float)r *PI;
    cout<<"Circumference of the circle is "<<i<<endl;
}
void area(int r){
    float i= 2*(float)r*(float)r* PI;
    cout<<"Area of the circle is "<<i<<endl;
}

int main(){
    int r;
    cout<<"Enter the radius of a circle: ";
    cin>>r;
    diameter(r);
    circumference(r);
    area(r);
}