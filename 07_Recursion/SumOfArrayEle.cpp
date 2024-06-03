#include<iostream>
#include<vector>
#include<string>
#include<climits>

using namespace std;

int sumOfArrayEle(int *arr, int idx, int n) {
    if(idx == n - 1) return arr[idx];
    return arr[idx] + sumOfArrayEle(arr, idx + 1, n);
}

int main() {
    int arr[] = {1,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx = 0;
    int sum = sumOfArrayEle(arr, idx, n);
    cout << sum << endl;
    return 0;
}