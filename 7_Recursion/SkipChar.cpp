#include<iostream>
#include<vector>
#include<string>

using namespace std;

string removeChar(string& str, int idx, int n) {
    if(idx == n) return "";
    string ans = "";
    ans = str[idx];
    return ((str[idx] == 'a' ? "" : ans) + removeChar(str, idx + 1, n));

}

int main() {
    string str = "abacx";
    int n = str.size();
    string ans = removeChar(str, 0, n);
    cout << ans << endl;
    return 0;
}