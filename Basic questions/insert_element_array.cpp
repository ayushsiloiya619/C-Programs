#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int array[n];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array!."<<endl;
    for(int i=0;i<n;i++)
    cin>>array[i];
    sort(array,array+n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
return 0;
}