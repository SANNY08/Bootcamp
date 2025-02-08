#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
       sum= sum+arr[i]; 
    }
    return sum;
}
int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of array element :";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of array element :"<<sum(arr,n);
}