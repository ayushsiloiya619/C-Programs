#include<iostream>
using namespace std;
int main(){
    int num;
    int result=0;
    int remain;
    cout<<"Enter the three digit number ? ";
    cin>>num;
    int temp;
    temp=num;
    while(temp!=0){
        remain = temp%10;//temp se hai kat rahe hai 
        result = result+remain*remain*remain;
        temp=temp/10;//to get the second number in series
    }
    if(result==num){
        cout<<"This is arm";
    }
    else{
        cout<<"No arm";
    }
    return 0;
}