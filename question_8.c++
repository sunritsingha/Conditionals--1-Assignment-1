//Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    float z1=(x1+x3)/2;
    float z2=(y1+y3)/2;
    if(z1==x2 && z2==y2){
        cout<<"the points are on a straight line";
    }
    else{
        cout<<"the points are not on a straight line";
    }
}