#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"\nEnter the limit ? ";
    cin >>number ;
    cout <<"\nList of odd numbers from 1 to "<<number<<" are as\n ";
    for(int i =1; i<number;i++)
    {
        if(i%2!=0)
        {
            cout << i<<" "; 
        }
    }
    return 0;
}