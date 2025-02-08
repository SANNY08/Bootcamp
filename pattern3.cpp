#include<iostream>
using namespace std;
int main()
{
    int n=5;
    
    for(int i=1;i<=n;i++)
   
    {
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        int star =i-1;
        while(star)
        {
            cout<<star;
            star--;
        }
        cout<<endl;
    }
}