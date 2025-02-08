// print higest value of 5 element array
#include<iostream>
using namespace std;

int main()
{
 int arr[5];
 cout<<"Enter five array of element :";
 for(int i=0;i<5;i++)
 {
    cin>>arr[i];
 }
 for(int i=0;i<5;i++)
 {
    if(arr[0]< arr[i])
    {
        arr[0]=arr[1];
    }
 }
 cout<<"largrst number is : "<<arr[0]<<endl;
return 0;
}