#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int lo = 0 , hi = n*m - 1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(matrix[mid/n][mid%n] == target)return true;
        else if(matrix[mid/n][mid%n] > target)hi = mid - 1;
        else lo = mid + 1;
    }
    return false;
}

int main() {
    vector<vector<int>> v{
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int x = 9;
    bool ans = searchMatrix(v, x);
    cout << ans << endl;
    // int x = 34; 
    // int lor = 0;
    // int hir = v.size() - 1;
    // int midr;
    // int loc = 0;
    // int hic = v[0].size() - 1;
    // vector<int> ans(2, -1);
    // while(lor <= hir) {
    //     midr = lor + (hir - lor) / 2;
    //     if(v[midr][0] == x) {
    //         ans[0] = midr;
    //         ans[1] = 0;
    //         break;
    //     }
    //     else if(v[midr][0] < x) lor = midr + 1;
    //     else hir = midr - 1;
    // }
    // while(loc <= hic) {
    //     int midc = loc + (hic - loc) / 2;
    //     if(v[midr][midc] == x) {
    //         ans[0] = midr;
    //         ans[1] = midc;
    //         break;
    //     }
    //     else if(v[midr][midc] < x) loc = midc + 1;
    //     else hic = midc - 1;
    // }
    // cout << "(" << ans[0] << "," << ans[1] << ")" << endl;
    return 0;
}