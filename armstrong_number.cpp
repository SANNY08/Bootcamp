#include<iostream>
using namespace std;
void arm(int n)
{
    int rem,sum=0,temp;
    temp=n;
    while(n>0)
    {
        rem = n%10;
        sum = sum + (rem*rem*rem);
        n = n/10;
    }
    if(temp == sum )
    {
        cout<<"Armstrong number ";
    }
    else 
    {
        cout<<"Not armstrong number ";
    }
}
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    arm(n);
}