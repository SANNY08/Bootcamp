#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    cout<<"1 is prime "<<endl;
    for(int i=2;i<=n;i++)
   
    {
        if(n%i==0)
        {
            cout<<i<<" is not Prime"<<endl;
        }
        else{
            cout<<i<<" is Prime "<<endl;
        }
    
    }
    return 0;
}