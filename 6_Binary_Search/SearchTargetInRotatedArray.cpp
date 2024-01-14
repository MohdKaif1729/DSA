#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{1,3,5};
    int target = 0;
    int n = v.size();
    if(n == 1) {
        if(v[0] == target) cout << 0;
        else cout << -1;
    }
    if(n == 2) {
        if(v[0] == target) cout << 0;
        else if(v[1] == target) cout << 1;
        else cout << -1;
    }
    int lo = 0;
    int hi = n - 1;
    int idx = -1;
    int ans = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(mid == 0) {
            lo = mid + 1;
        }
        else if(mid == n - 1) {
            hi = mid - 1;
        }
        else if(v[mid - 1] > v[mid] && v[mid] < v[mid + 1]) {
            idx = mid;
            break;
        }
        else if(v[mid] > v[mid - 1] && v[mid] > v[mid + 1]) {
            idx = mid + 1;
            break;
        }
        else if(v[mid] < v[hi]) hi = mid - 1;
        else if(v[mid] > v[hi]) lo = mid + 1;
    }
    if(idx == -1) {
        lo = 0;
        hi = n - 1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(v[mid] == target) {
                ans = mid;
                break;
            }
            else if(v[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    if(idx == -1) {
        lo = 0;
        hi = n - 1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(v[mid] == target) {
                ans = mid;
                break;
            }
            else if(v[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    if(target >= v[0] && target <= v[idx - 1]) {
        lo = 0;
        hi = idx - 1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(v[mid] == target) {
                ans = mid;
                break;
            }
            else if(v[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    else {
        lo = idx;
        hi = n - 1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(v[mid] == target) {
                ans = mid;
                break;
            }
            else if(v[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
    }
    cout << "idx : " << idx << endl;
    cout << "ans : " << ans << endl;
    return 0;
}