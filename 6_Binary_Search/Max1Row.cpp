#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector< vector <int> > v{
        {0, 0, 0, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {1, 1, 1, 1}
    };
    int ans = -1;
    int n = v.size();
    int No_ones = -1;
    int fst_Occ = 0;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        int lo = 0;
        int hi = n - 1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(v[i][mid] == 1) {
                if(mid == 0 || v[i][mid - 1] != 1) {
                    fst_Occ = mid;
                    flag = true;
                    break;
                }
                else {
                    hi = mid - 1;
                }
            }
            else {
                lo = mid + 1;
            }
        }
        if(No_ones < n - fst_Occ) {
            No_ones = n - fst_Occ;
            ans = i;
        }
    }
    cout << ans + 1 << "th Row Has Max No. of 1's!" << endl;

    return 0;
}