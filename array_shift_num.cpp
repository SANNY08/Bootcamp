#include<iostream>
using namespace std;
void shiftarr(int arr[])
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    while(count<5)
    {
        arr[count++]=0;
    }
}
int main()
{
  
    int arr[5];
    cout<<"Enter  element :";
    for(int i=0;i<5;i++)
    {cin>>arr[i];}
    //int n=sizeof(arr)/sizeof(arr[0]);
    shiftarr(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }    
    return 0;
}