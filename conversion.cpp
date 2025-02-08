#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Centemeter to convert in Meter :";
    cin>>a;

    cout<<"Enter Kg to convert in Gram :";
    cin>>b;

    float m = a*0.01;
    float g = b*1000;
    cout<<"Convert in the form of Meter :"<<m<<endl;
    cout<<"Convert in the form of Gram  :"<<g<<endl;
    return 0;
}