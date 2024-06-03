#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    // ******* Find No. Of Negative Element In 1D Matrix *******
    // vector<int> v{1,-1};
    // int n = v.size();
    // int lo = 0;
    // int hi = n - 1; 
    // int idx = -1;
    // while(lo <= hi) {
    //     int mid = lo + (hi - lo) / 2;
    //     if(v[mid] < 0) {
    //         if(mid == 0 || v[mid - 1] > 0) {
    //             idx = mid;
    //             break;
    //         } else {
    //             hi = mid - 1;
    //         }
    //     } else {
    //         if(mid != n - 1) {
    //             if(v[mid + 1] < 0) {
    //                 idx = mid + 1;
    //                 break;
    //             } else {
    //                 lo = mid + 1;
    //             }
    //         } else {
    //             idx = n;
    //             break;
    //         }
    //     }
    // }
    // cout << n - idx << endl;


    // ******* Find No. Of Negative Elements In 2D Matrix *******
    vector<vector<int>> v{
        {-3,-1},
        {-2,-3}
    };
    int m = v.size();
    int n = v[0].size();
    int ans = 0;
    for(int i = 0; i < m; i++) {
        int lo = 0;
        int hi = n - 1; 
        int idx = -1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(v[i][mid] < 0) {
                if(mid == 0 || v[i][mid - 1] > 0) {
                    idx = mid;
                    break;
                } else {
                    hi = mid - 1;
                }
            } else {
                if(mid != n - 1) {
                    if(v[i][mid + 1] < 0) {
                        idx = mid + 1;
                        break;
                    } else {
                        lo = mid + 1;
                    }
                } else {
                    idx = n;
                    break;
                }
            }
        }
        idx = n - idx;
        ans += idx;
    }
    cout << ans << endl;
    return 0;
}