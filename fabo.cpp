#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        return fibo(n-1) + fibo(n-2);
    }

}
int main()
{
    int a;
    cout<<"Enter number :";
    cin>>a;
   for(int i=0;i<=a;i++)
    {
        if(a<=0)
    {
        cout<<"Fibo is not  for negative number :";
    }
    else{ 
        cout<<fibo(a)<<" ";
    }
    }
    
}