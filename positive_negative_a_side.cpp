#include <iostream>
using namespace std;
void rearengeArray(int arr[], int size)
{
    int left = 0,right = size - 1;
    while (left <= right) {    
        if (arr[left] < 0 && arr[right] > 0) {
            left++;
            right--;
        }
        else if (arr[left] > 0 && arr[right] < 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] < 0) {
            left++;
        } 
        else {
            right--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter element of an array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "Original array: ";
    printArray(arr,n);
    rearengeArray(arr,n);
    cout << "Rearranged array: ";
    printArray(arr,n);
    return 0;
}