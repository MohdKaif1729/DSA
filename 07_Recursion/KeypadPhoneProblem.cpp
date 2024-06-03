#include <iostream>
#include <vector>
using namespace std;

void keypadCombination(string& str, int i, string result, vector<string>& ans, vector<string>& que) {
    if(i == str.size()) {
        ans.push_back(result);
        return;
    }
    int digit = str[i] - '0';
    if(digit <= 1) {
        keypadCombination(str, i + 1, result, ans, que);
        return;
    }
    for(int j = 0; j < que[digit].size(); j++) {
        keypadCombination(str, i + 1, result + que[digit][j], ans, que);
    }
    return;
}


int main() {
    vector<string> que{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    int i = 0;
    string result = "";
    string str = "2";
    keypadCombination(str, i, result, ans, que);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}