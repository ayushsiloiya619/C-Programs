#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,space;
    cout<<"Enter the value ";
    cin>>rows;
    for(i=rows;i>=1;i--)
    {
        for(space=i;space<rows;space++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}