#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{};
    int lo1 = 0;
    int hi1 = v.size() - 1;
    int lo2 = 0;
    int hi2 = v.size() - 1;
    int ans = -1;
    bool flag = false;
    if(v.size() == 1 || v.size() == 0) {
        cout << ans << endl;
        return 0;
    }
    while(lo1 <= hi1) {
        int mid1 = lo1 + (hi1 - lo1) / 2;
        int mid2 = lo2 + (hi2 - lo2) / 2;
        if(mid1 == 0) {
            if(v[mid1] == v[mid1 + 1]) {
                ans = v[mid1];
                flag = true;
                break;
            }
            else {
                mid1 = -1;
            }
        }
        else if(v[mid1] == v[mid1 - 1] || v[mid1] == v[mid1 + 1]) {
            ans = v[mid1];
            flag = true;
            break;
        }
        else {
            hi1 = mid1 - 1;
        }

        if(mid2 == v.size() - 1) {
            if(v[mid2] == v[mid2 - 1]) {
                ans = v[mid1];
                flag = true;
                break;
            }
            else {
                mid2 = v.size();
            }
        }
        else if(v[mid2] == v[mid2 + 1] || v[mid2] == v[mid2 - 1]) {
            ans = v[mid2];
            flag = true;
            break;
        }
        else {
            lo2 = mid2 + 1;
        }
    }

    if(flag == true) cout << ans << endl;
    else cout << ans << endl;

    return 0;
}