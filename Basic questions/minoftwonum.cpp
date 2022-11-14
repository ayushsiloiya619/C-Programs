#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the two numbers ";
    cin>>x>>y;
    if(x<y)
    {
        cout<<"Min is "<<x<<endl;
    }
    else if(x==y)
    {
        cout<<"They are equal";
    }
    else
    {
        cout<<"Min is "<<y<<endl;
    }
    return 0;
}