#include<iostream>
#include<vector>
#include<string>

using namespace std;

void subset(string& str, string ans, int i, vector<string>& finalAns) {
    if(i == str.size()) {
        finalAns.push_back(ans);
        return;
    }
    subset(str, ans + str[i], i + 1, finalAns);
    subset(str, ans, i + 1, finalAns);
}

int main() {
    vector<string> ans;
    string str = "abc";
    subset(str, "", 0, ans);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}