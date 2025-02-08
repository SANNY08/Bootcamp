#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,temp,rem;
    cout<<"Enter numnber :";
    cin>>n;
    temp=n;
    while(n>0)
    {
        rem = n%10;
        sum = (sum*10)+rem;
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<"Number is Palindrome"<<endl; 
    }
    else{
       cout<<"Number is not Palindrome"<<endl; 
    }
    return 0;
}