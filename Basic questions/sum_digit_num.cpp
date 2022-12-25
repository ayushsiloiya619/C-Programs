#include<iostream>
using namespace std;
int main(){
    //aim hai ki sum of digit of a number nikalna hai .
    int num;
    cout<<"Enter the number to find the sum of digit ";
    cin>>num;
    int remain;
    int res=0;
    while(num!=0){
        remain=num%10;
        res=res+remain;
        num=num/10;
    }
    cout<<"Sum of digit is "<<res<<endl;
    return 0;
}