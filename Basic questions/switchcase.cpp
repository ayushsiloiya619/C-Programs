#include<iostream>
using namespace std;
int main()
{
    int a=100,b=200;
    switch(a){
        case(100):
        cout <<"This is outer switch"<<endl;
        switch(b){
            case(200):
            cout<<"This is inner switch"<<endl;
        }
    }
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    return 0;
}