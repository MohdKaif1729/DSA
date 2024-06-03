#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{5,4,3,2,1};
    int lo = 0;
    int x = 4;
    int ans = -1;
    int hi = v.size() - 1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == x) {
            ans = mid;
            break;
        }
        else if(v[mid] > x) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << ans << endl;
    return 0;
}