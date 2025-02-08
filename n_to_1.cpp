#include<iostream>
using namespace std;
void n_to_1(int num)
{
    if(num==0)
    {
        return;
    }
    cout<<num;
    n_to_1(num-1);
}
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    n_to_1(n);
    return 0;
}