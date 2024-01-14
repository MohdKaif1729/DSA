#include<iostream>
#include<vector>
#include<string>
#include<climits>

using namespace std;

int printArrayEle(int *arr, int idx, int n, int ans) {
    if(idx == n) return ans;
    if(ans < arr[idx]) ans = arr[idx];
    int max = printArrayEle(arr, idx + 1, n, ans);
    return max;
}

int main() {
    int arr[] = {10,5,4,7,8,12,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx = 0;
    int ans = INT_MIN;
    int max = printArrayEle(arr, idx, n, ans);
    cout << max << endl;
    return 0;
}