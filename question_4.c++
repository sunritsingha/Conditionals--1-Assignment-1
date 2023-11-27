//Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    float length,breadth;
    cin>>length>>breadth;
    float area=length*breadth;
    float perimeter=2*(length+breadth);
    if(area>perimeter){
        cout<<"area is greater";
    }
    else{
        cout<<"permeter is greater";
    }

}