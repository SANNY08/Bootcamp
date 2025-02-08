//create an array of five element by using the bitmanupulation chake the Kth bit is set or not and print the value
#include <iostream>
using namespace std;
bool bit(int num,int k)
{
    return num &(1<<k)!=0;
}
int main() {
 int arr[5]={5,10,15,20,25};
 int k=2;
 cout<<k;
 for(int i =0;i<5;i++)
 {
    cout<<arr[i]<<" ";
    if(bit(arr[i],k)){
        cout<<"kth bit"<<endl;
    }
    else{
        cout<<"kht bit is not "<<endl;
    }
 }
    return 0;
}