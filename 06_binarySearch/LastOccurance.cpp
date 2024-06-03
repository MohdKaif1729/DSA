#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{1,2,3,3,4,4,4,5};
    int x = 4;
    int ans = -1;
    bool flag = false;
    // Linear Search
    // for(int i = v.size() - 1; i >= 0; i--) {
    //     if(v[i] == x) {
    //         ans = i;
    //         flag = true;
    //         break;
    //     }
    // }
    // if(flag == false) cout << ans << endl;
    // else cout << ans << endl;

    // Binary Search
    int lo = 0;
    int hi = v.size() - 1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == x) {
            if(mid == v.size() - 1 || v[mid + 1] != x) {
                ans = mid;
                flag = true;
                break;
            }
            else {
                lo = mid + 1;
            }
        }
        else if(v[mid] < x) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    if(flag == false) cout << ans << endl;
    else cout << ans << endl;

    return 0;
}