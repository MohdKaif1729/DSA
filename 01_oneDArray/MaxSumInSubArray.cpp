#include <iostream>
#include <climits>
using namespace std;

// // TC: O(n^2)
// int maxSumInSubArray(int* arr, int n) {
//     int ans = INT_MIN;
//     for(int i = 0; i < n; i++) {
//         int prefix = 0;
//         for(int j = i; j < n; j++) {
//             prefix += arr[j];
//             ans = max(ans, prefix);

//         }

//     }

//     return ans;
// }

// TC: O(n)
// Kadane's Agorithm
int maxSumInSubArray(int* arr, int n) {
    int ans = INT_MIN;
    int prefix = 0;
    for(int i = 0; i < n; i++) {
        prefix += arr[i];
        ans = max(ans, prefix);
        // make prefix 0 if it -(ve)
        if(prefix < 0) {
            prefix = 0;
        }

    }

    return ans;
}

int main() {
    int arr[] = {4, -6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = maxSumInSubArray(arr, n);
    cout << ans << endl;
    return 0;
}