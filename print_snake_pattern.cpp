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
    cout<<"\nSnack Pattern: "<<endl;
    for(int i=0; i<3; i++){
        if(i%2==0){
            for(int j=0; j<3; j++){
                cout<<arr[i][j]<<" ";
            }
        } else {
            for(int j=3-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl; 
    return 0;
}







