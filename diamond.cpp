#include<iostream>
using namespace std;

int main() {
    int n = 5;
    
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        
        // Print stars
        for (int j = 1; j <= (2*i-1); j++) {
            //cout <<"*";
            cout<<j;
        }
        
        cout << endl;
    }
    
    // Lower half of the diamond
 for (int i = n - 1; i >= 1; i--) {  
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
           // cout << "*";
           cout<<j;
        }
        
        cout << endl;
    }
    
    return 0;
}
