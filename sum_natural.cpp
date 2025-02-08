#include<iostream>
using namespace std;
int s_natural(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+s_natural(n-1);
    }
   
}
int main()
{
int num;
cout<<"Enter number :";
cin>>num;
 cout<<s_natural(num);
}