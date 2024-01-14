#include <iostream>
using namespace std;

bool isPalindrome(string& s) {
    for(int i = 0, j = s.size() - 1; i < j; i++, j--) {
        if(s[i] != s[j]) {
            return false;
        }
    }

    return true;
}

int makePalindrome(string& s) {
    if(s.size() == 1) {
        return 0;
    } 
    for(int i = s.size() - 1; i >= 0; i--) {
        string temp = s.substr(0, i);
        if(isPalindrome(temp)) {
            cout << i << endl;
            return (s.size() - i);
        }

    }

    return -1;
}

int main() {

    string s = "abc";
    cout << makePalindrome(s);
    
    return 0;
}