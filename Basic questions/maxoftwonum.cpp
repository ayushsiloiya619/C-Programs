#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the two numbers ";
    cin>>x>>y;
    if(x>y)
    {
        cout<<"Max is "<<x<<endl;
    }
    if(x==y)
    {
        cout<<"They are equal";
    }
    else
    {
        cout<<"The max is "<<y<<endl;
    }
    return 0;
}