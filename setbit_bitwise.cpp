//create an array of five element and count the number of set bits of each index value by using bitwise operator;
#include <iostream>
using namespace std;
int count(int n) {
    int count = 0;
    while (n) {
        count =count+(n & 1); 
        n>>=1;           
    }
    return count;
}
int main() {
    int arr[5];
    int total = 0;
    cout<<"Enter five element :";
    for(int i=0;i<5;i++)//input
    {
        cin>>arr[i];
    }

    for (int i = 0; i < 5; ++i)
    {
    cout<<total+count(arr[i])<<" ";
    
    //total += count(arr[i]);
    }
    //cout<<endl<<total;    
    return 0;
}
