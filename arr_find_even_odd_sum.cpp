#include<iostream>
using namespace std;
void evenfun(int arr[])
{
    int evensum=0,oddsum=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
           evensum=evensum+arr[i];
        } 
        else{
           oddsum=oddsum+arr[i];
        }    
    }
    cout<<"Sum of Even :"<<evensum<<endl;
    cout<<"Sum of Odd :"<<oddsum<<endl;
}

int main()
{
    int arr[10];
    cout<<"Enter ten element :";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
   evenfun(arr);
  
}