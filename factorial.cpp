#include<iostream>
using namespace std;
int main()
{
    static int fact=1,n;
    cout<<"Enter number :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" : "<<fact;
}