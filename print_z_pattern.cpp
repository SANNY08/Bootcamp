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
    cout<<"\n Matrix: "<<endl;
    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<"\n Z pattern elements: "<<endl;
    for(int j=0; j<3; j++){
        cout<<arr[0][j]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++)
        {
            if(i+j==3-1)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    for(int j=0;j<3;j++)
    {
        cout<<arr[3-1][j]<<" ";
    }
    cout<<endl;
    return 0;
}