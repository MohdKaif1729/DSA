#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{3,5,3,2,0};
    int lo = 1;
    int ans = -1;
    int hi = v.size() - 2;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(v[mid - 1] < v[mid] && v[mid] > v[mid + 1]) {
            ans = v[mid];
            break;
        }
        else if(v[mid] > v[mid + 1]) {
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}