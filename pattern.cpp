// You are using GCC
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int size = 2 * n -1;
    
    for(int i=1; i<=size; i++)
    {
        for(int j=1; j<=size; j++)
        {
            if(i == 1 || j == 1 || i == size-1 || j == size-1 || i==n-1 || j==n-1 ||  i==size-n || j==size-n )
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
         cout<<endl;
      
    }
   return 0;
}