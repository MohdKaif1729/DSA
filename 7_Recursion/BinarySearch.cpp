#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool search_Ele_BS(int *arr, int lo, int hi, int target) {
    int mid = lo + (hi - lo) / 2;
    if(lo > hi) {
        return false;
    } else if(arr[mid] == target) {
        return true;
    } else if(target < arr[mid]) {
        return search_Ele_BS(arr, lo, mid - 1, target);
    } else {
        return search_Ele_BS(arr, mid + 1, hi, target);
    }  
}

int main() {
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 1;
    bool ans = search_Ele_BS(arr, 0, n - 1, target);
    cout << ans << endl;
    return 0;
}