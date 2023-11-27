//Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"enter the radius of the circle: ";
    cin>>r;
    float area=3.14*r*r;
    float circumference=2*3.14*r;
    if(circumference>area){
        cout<<"the area is not larger";
    }
    else{
        cout<<"the area is larger";
    }
    
}