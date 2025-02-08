#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isprime=1;
    cout<<"Enter number :";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
           isprime = 0;
           break;
        }
    }
    if(isprime ==0)
    {
        cout<<"Not a Prime number :"<<endl;
    }
    else {
        cout<<"Prime number :"<<endl;
    }
    return 0;

}