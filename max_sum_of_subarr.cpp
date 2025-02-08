#include<iostream>
#include<climits>
using namespace std;
int maxsubarr(int arr[],int size){
    int maxSum=INT_MIN;
    for(int i=0;i<size;i++){
        int currentSum=0;
        for(int j=i;j<size;j++){
            currentSum = currentSum+arr[j];
            maxSum = max(maxSum,currentSum);
        }
    }
    return maxSum;
}int main()
{
    int arr[]={10,20,-30,5,-6,8,40};
    int size=sizeof(arr)/sizeof(arr[10]);
    int result = maxsubarr(arr,size);
    cout<<"Maximum sum of Subarray :"<<result<<endl;
    return 0;
}
