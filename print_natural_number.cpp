#include<iostream>
using namespace std;
void natural(int a)
{
    if(a == 0)
    {
       return ;
    }
    natural(a-1);
    cout<<a;
}
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    natural(n);
    return 0;
}