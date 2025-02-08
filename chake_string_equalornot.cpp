//chake number is anagram or not

#include <iostream>
using namespace std;
bool anagrams(string str1, string str2) {
    if (str1.length() != 3 || str2.length() != 3) {
        return false; 
    }
    int count1[256] = {0}; 
    int count2[256] = {0};
    for (int i = 0; i < 3; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    string chars1, chars2;
    cout << "Enter first characters: ";
    cin >> chars1;
    cout << "Enter  second characters: ";
    cin >> chars2;

    if (anagrams(chars1, chars2)) {
        cout << "Anagrams" << endl;
    } else {
        cout << "Not anagrams" << endl;
    }

    return 0;
}