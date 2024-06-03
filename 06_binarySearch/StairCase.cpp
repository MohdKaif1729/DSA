#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

int main() {
    // Binary Search
    long long n = INT_MAX;
    long long lo = 1;
    long long hi = n;
    int ans_bs = -1;
    while(lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        long long sum = (mid * (mid + 1)) / 2;
        if(sum == n) {
            ans_bs = mid;
            break;
        }
        else if(sum < n) {
            ans_bs = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    cout << endl << "BS ans : " << ans_bs << endl;

    // Linear Search
    n = INT_MAX;
    int ans_ls = 0;
    int x = n;
    int i = 1;
    while (i <= n) {
        x -= i;
        if (x >= 0) ans_ls++;
        else break;
        i++;
    }
    cout << "LS ans : " << ans_ls << endl;
    return 0;
}