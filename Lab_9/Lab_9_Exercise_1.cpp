/*Write a C++ program to demonstrate the use of function type-1.*/

/*No argument pass no value return*/

#include<iostream>
using namespace std;

void add(){
    int n, m;
    cout<<"Enter two interger: ";
    cin>>n>>m;
    cout<<"Sum = "<<n+m;
}

int main(){

    add();

    return 0;
}