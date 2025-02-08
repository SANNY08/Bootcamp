#include<iostream>
using namespace std;
void reversearr(int arr[],int n)
{
    int start=0;
    int end=n-1;
   // for(int i=0;i<n;i++)
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
} 
void printfarr(int arr[],int  n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    reversearr(arr,10);
    printfarr(arr,10);
    return 0;
}