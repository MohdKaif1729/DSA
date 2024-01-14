#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// TC: O(n^3)
// TC: O(1)
// vector<int> threeSum(int* arr, int n, int x) {

//     vector<int> ans(3, -1);
//     if(n < 3) return ans;
//     for(int i = 0; i < n - 2; i++) {
//         for(int j = i + 1; j < n - 1; j++) {
//             for(int k =  j + 1; k < n; k++) {
//                 if(arr[i] + arr[j] + arr[k] == x) {
//                     ans[0] = i;
//                     ans[1] = j;
//                     ans[2] = k;
//                     return ans;
//                 }
//             }
//         }
//     }

//     return ans;
// }

// TC: O(n)
// TC: O(1)
bool threeSum(vector<int>& arr, int n, int x) {
    
    sort(arr.begin(), arr.end());
    int start = 0;
    int mid = 1;
    int end = n - 1;

    while(start < mid && mid < end) {
        if(arr[start] + arr[mid] + arr[end] == x) {
            
            return true;
        }

        else if(arr[start] + arr[mid] + arr[end] < x) {
            if(mid == end - 1) {
                start++;
            }
            else {
                mid++;
            }
        }

        else {
            if(mid == start + 1) {
                end--;
            }
            else {
                mid--;
            }
        }
    }
    

    return false;
}

int main() {
    vector<int> arr{45, 4, 1, 8, 6, 10};
    int n = arr.size();

    int x = 13;

    int ans = threeSum(arr, n, x);

    
    cout << ans << endl;
    
    return 0;
}