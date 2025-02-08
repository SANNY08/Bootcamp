#include<iostream>
using namespace std;
int countpower(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
       int num =arr[i];
       if((num &(num-1))==0 )
       {
        count++;
       }   
    } 
    return count;  
}
int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Power of 2 elements are :"<<countpower(arr,n);
}