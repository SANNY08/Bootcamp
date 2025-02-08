#include<iostream>
using namespace std;
bool leaner(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[100],a,key;
    cout<<"Enter size of array :";
    cin>>a;
    cout<<"Enter array of element :";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key number you want to search :";
    cin>>key;
    bool found = leaner(arr,a,key);
    if(found)
    {
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"key is not presewnt ";
    }

return 0;
}