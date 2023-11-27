//Ques : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year: ";
    cin>>year;
    if(year%4==0){
        cout<<"the year is a leap year.";

    }
    else{
        cout<<"the year is not a leap year.";
    }
}
