//Ques : Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter the three sides of the triangle";
    cin>>a>>b>>c;
    if(a==b && b==c && c==a){
        cout<<"the triangle is a equilateral angle";
    }
    else if(a!=b && b!=c && c!=a){
        cout<<"the triangle is a scalene triangle";
    }
    else{
        cout<<"the triangle is a isosceles triangle";
    }
}