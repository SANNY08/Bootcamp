#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void alterswp(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
}

int main()
{
    int arr[10]={1,2,7,8,5};
    alterswp(arr,5);
    printarr(arr,5);
    return 0;
}