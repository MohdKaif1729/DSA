#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    vector<int> v{1,2,1,1,3,3};
    // Before : 1, 2, 2, 1, 1, 3
    // After  : 1, 1, 1, 2, 2, 3
    sort(v.begin(), v.end());
    // vector<int> ans;
    // int cnt = 1;
    // for(int i = 0; i < v.size() - 1; i++) {
    //     if(v[i] != v[i + 1]) {
    //         ans.push_back(cnt);
    //         cnt = 1;
    //     } else {
    //         cnt++;
    //     }
    // }
    int ans = v[0];

    for(int i = 1; i < v.size(); i++) {
        ans ^= v[i];
    }

    cout << ans << endl;










    return 0;
}