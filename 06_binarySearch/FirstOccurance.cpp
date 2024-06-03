#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int> &nums, int target) {
    vector<int> v(2, -1);
    int lo = 0;
    int hi = nums.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) {
            if (mid == 0 || nums[mid - 1] != target) {
                v[0] = mid;
                break;
            }
            else hi = mid - 1;
        }
        else if (nums[mid] > target) hi = mid - 1;
        else lo = mid + 1;   
    }
    lo = 0;
    hi = nums.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) {
            if (mid == nums.size() - 1 || nums[mid + 1] != target) {
                v[1] = mid;
                break;
            }
            else lo = mid + 1;
        }
        else if (nums[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return v;
}

int main() { 
    vector<int> v{1,1,2,2,3,3,3,3,4,4,5,5,6,7,8,9};
    int x = 2;
    vector<int> ans = searchRange(v, x);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}