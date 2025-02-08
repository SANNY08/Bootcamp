#include<iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nMatrix: "<<endl;
    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<"\nDiagonal elements: "<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i][3-1-i]<<" ";
    }
    cout<<endl;
    return 0;
}