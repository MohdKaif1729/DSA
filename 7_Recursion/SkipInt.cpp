#include<iostream>
#include<vector>
#include<string>

using namespace std;

void SkipInt(vector<int>& v,int i, vector<int>& ans, int j, int n) {
    if(i == n) return;
    if(v[i] != 1) {
        ans.push_back(v[i]);
    }
    SkipInt(v, i + 1, ans, j, n);
    return;  
}

int main() {
    vector<int> arr{1,2,3,1,4,5,1,3};
    vector<int> ans;
    int n = arr.size();
    SkipInt(arr, 0, ans, 0, n);
    for(int ele : ans) {
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}