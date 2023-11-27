//Ques : If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"marks of A: ";
    cin>>a;
    cout<<"marks of B: ";
    cin>>b;
    cout<<"marks of C: ";
    cin>>c;
    if(a<b && a<c){
        cout<<"the least scoring is A";
    }
    else if(b<a && b<c){
        cout<<"the least scoring is B";
    }    
    else{
        cout<<"the least scoring is C";
    }
  


}