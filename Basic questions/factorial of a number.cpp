#include<iostream>
using namespace std;
int main(){
    int number;
    long fact=1.0;
    cout <<"Enter the postive number ";
    cin >>number ;
    if(number<0){
        cout<<"Error";
    }
    else{
        for(int i=1;i<=number;i++){
            fact=fact*i;
        }
        cout<<"The factorial of "<<number<<" is "<<fact;
    }
    return 0;
}