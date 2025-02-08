//write a program to count the number of set bits
#include<iostream>
using namespace std;
int setbit(int num)
{
    int count=0;
    while(num>0)
    {
        count=count+(num&1);
        num>>=1;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
cout<<"The number of set bits in "<<n<<" is :"<<setbit(n);
return 0;
}

