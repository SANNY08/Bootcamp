//chake the given number is divisible by 3 or 5 or not
#include<iostream>
using namespace std;
void div(int arr[])
{
    for(int i=0;i<5;i++)
    {
        if(arr[i]%3==0)
        {
             cout<<"Divisible by 3 :"<<arr[i]<<endl;
        }
        else if ( arr[i]%5==0){
             cout<<"Divisible by 5 :"<<arr[i]<<endl;
        }
    }
}
int main()
{
    int arr[5];
    cout<<"Enter five element :";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    div(arr);
}