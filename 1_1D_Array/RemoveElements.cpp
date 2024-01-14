#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums{0,0,1,0,0,0,1,1};
    int n = nums.size();
    int ans = -1;
    int NoOf1s = 0;
    int NoOf0s = 0;
    for (int j = 0; j < n; j++) {
        if (nums[j] == 0) NoOf0s++;
        else NoOf1s++;
    }
    int i = 0;
    int j = n - 1;
    while(i < j) {
        if(NoOf0s == NoOf1s) {
            ans = j - i + 1;
            break;
        }
        else if(nums[i] == 0 && nums[j] == 1){
            if(NoOf0s > NoOf1s) {
                NoOf0s--;
                i++;
            }
            else {
                NoOf1s--;
                j--;
            }
        }
        else if(nums[i] == 1 && nums[j] == 0){
            if(NoOf0s > NoOf1s) {
                NoOf0s--;
                i++;
            }
            else {
                NoOf1s--;
                j--;
            }
        }
    }
    cout << ans << endl;
    
    // ******* Operations On Vector *******
    // vector<int> nums;
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.resize(8);
    // cout << nums.size() << endl;
    // nums.insert(nums.begin() + 1, 5);
    // cout << nums.capacity() << endl;
    // int n = nums.size();
    // nums.erase(nums.begin() + 1);
    // nums.erase(nums.begin() + 2);
    // nums.erase(nums.begin() + 2);
    // nums.erase(nums.begin() + 5);
    // int m = nums.size();
    // for(int i = 0; i < n; i++) {
    //     cout << nums[i] << " ";
    // }

    
    return 0;
}