#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three number :";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"A is largest ";
    }
    else if(b>c && b>a)
    {
        cout<<"B is largest ";
    }
    else{
        cout<<"C is largest";
    }
    return 0;
}