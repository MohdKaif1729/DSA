#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

// Recursive Solution of the program
string remove(string str, int idx, int n) {
    if(idx == n) return "";
    string ans = "";
    ans += str[idx];
    return ((str[idx] == 'a') ? "" : ans) + remove(str, idx + 1, n);

}

int main() {
    string str = "abcax";
    cout << str << endl;
    int n = str.length();
    string ans = remove(str, 0, n);
    cout << ans << endl; 
    
    
    return 0;
}