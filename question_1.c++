//Ques : Take 2 integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the two digits: ";
    int x,y;
    cin>>x>>y;
    if(x>y){
        cout<<"the greatest number is: "<<x<<endl;
    }
    else{
        cout<<"the greatest number is: "<<y<<endl;
    }
}