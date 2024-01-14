#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    int cnt = 0;
    int lo = 0;
    int hi = v.size() - 1;
    int fst_Occ = 0;
    bool flag = false;

    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == 1) {
            if(mid == 0 || v[mid - 1] != 1) {
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

    if(flag == true) cout << v.size() - fst_Occ << endl;
    else cout << fst_Occ << endl;

    return 0;
}