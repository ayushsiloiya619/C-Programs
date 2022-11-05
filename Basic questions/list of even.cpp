#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "\nEnter maximu limit upto which u want to enter ? ";
    cin >> number;
    cout <<"\nList of even Numbers from 1 to "<<number<<" are as \n";
    for(int i=1 ;i<= number;i++)
    {
        if (i%2==0)
        {
          cout <<i<<" ";    
        }
    }
    return 0;
}