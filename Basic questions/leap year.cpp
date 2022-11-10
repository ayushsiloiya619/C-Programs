#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year ";
    cin>>year;
    if (year%100==0)
    {
        cout<<"Not a leap year.";
    }
    else if (year%4==0)
    {
        cout<<"Is a leap year.";
    }
    else if(year%400==0)
    {
        cout<<"is a leap year";
    }
    else 
    {
        cout<<"not a leap year";
    }
    return 0;
}