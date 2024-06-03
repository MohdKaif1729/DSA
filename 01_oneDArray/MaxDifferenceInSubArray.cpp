#include <iostream>
#include <climits>
using namespace std;

int maxDifferenceInSubArray(int* arr, int n) {
    int lastValue = arr[n - 1];
    int ans = INT_MIN;
    
    for(int i = n - 2; i >= 0; i--) {
        if(lastValue > arr[i]) {
            int temp = lastValue - arr[i];
            ans = max(temp, ans);
        }
        else {
            lastValue = arr[i];
        }

    }

    return ans;
}

int main() {
    int arr[] = {9, 5, 8, 12, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = maxDifferenceInSubArray(arr, n);
    cout << ans << endl;
    return 0;
}