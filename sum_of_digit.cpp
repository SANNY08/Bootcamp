#include<iostream>
using namespace std;
int sum_of_digit(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n%10 + sum_of_digit(n/10);
    }

}
int main()
{
    int a;
    cout<<"Enter number :";
    cin>>a;
    cout<<"Sum of digits :"<<sum_of_digit(a);
    
    return 0;
}