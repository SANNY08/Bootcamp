//find maximum sum of sub array of size 'k' with sliding window
#include <iostream>
#include <algorithm>
using namespace std;
int maxSumSubarr(int arr[], int n, int k) {
    if (n < k) {
        return -1;    
    } 
    int w_sum = 0;
    for (int i = 0; i < k; i++) {
        w_sum =     w_sum+arr[i];
    }
    int max_sum = w_sum;  
    for (int i = k; i < n; i++) {
        w_sum = w_sum+arr[i] - arr[i - k];  
        max_sum = max(max_sum, w_sum); 
    }
    return max_sum;  
}
int main() {
    int arr[] = {10,20,5,40,30};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3;  
    int result = maxSumSubarr(arr, n, k);
    if (result != -1) {
        cout << "The maximum sum of subarray of size " << k << " is: " << result << endl;
    } else {
        cout << "Subarray of size " << k << " is not possible." <<endl;
    }   
    return 0;
}

