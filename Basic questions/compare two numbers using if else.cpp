#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout<<"Enter the two numbers for comparision ";
    cout<<"\n-------------------------------------";
    cout<<"\nEnter the value of num1 ";
    cin >>num1 ;
    cout<<"\nEnter the value of  num2 ";
    cin>>num2;
    if(num1==num2)
    {
        cout<<num1<<" == "<<num2<<endl;
    }
    if(num1!=num2)
    {
        cout<<num1<<" != "<<num2<<endl;
    }
    if(num1>num2)
    {
        cout<<num1<<" > "<<num2<<endl;
    }
    if(num2>num1)
    {
        cout<<num2<<" > "<<num1<<endl;
    }
}
