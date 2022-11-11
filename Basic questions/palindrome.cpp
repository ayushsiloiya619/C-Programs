#include<iostream>
using namespace std;
int main(){
    int n,num,digit,rev=0;
    cout<<"Enter the number ";
    cin>>n;
    num=n;
    while(n>0){
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    cout<<rev<<endl;
    if(num==rev){
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}