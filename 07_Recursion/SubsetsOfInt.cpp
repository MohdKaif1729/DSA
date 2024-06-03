#include<iostream>
#include<vector>
#include<string>

using namespace std;

void subsetOfInt(vector<int>& que, int i, int n, vector<int> ans, vector<vector<int>>& finalAns) {
    if(i == n) {
        finalAns.push_back(ans);
        return;
    }
    subsetOfInt(que, i + 1, n, ans, finalAns);
    ans.push_back(que[i]);
    subsetOfInt(que, i + 1, n, ans, finalAns);
    return;
}

int main() {
    vector<int> que{1,2,3};
    vector<vector<int>> finalAns;
    int n = que.size();
    vector<int> ans;
    subsetOfInt(que, 0, n, ans, finalAns);
    for(int i = 0; i < finalAns.size(); i++) {
        for(int j = 0; j < finalAns[i].size(); j++) {
            cout << finalAns[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}