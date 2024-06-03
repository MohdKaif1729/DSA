#include<iostream>
#include<string>
#include<algorithm>
#include<string.h>

using namespace std;

int main() {
    string s;
    cout << "Enter a string : \n";
    getline(cin, s);
    int n = s.size();
    int cnt = 0;
    bool flag = false;
    for(int i = 0; i < n / 2 ; i++) {
        if(s[i] == s[n - i - 1]) {
            flag = true;
        }
        else {
            flag = false;
        }
    }
    if(flag == true) {
        cout << "Palindrome";
    } 
    else {
        cout << "Not Palindrome";
    }
 

    return 0;
}