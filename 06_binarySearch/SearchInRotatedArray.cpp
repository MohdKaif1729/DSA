#include <iostream>
using namespace std;

int searchInRotatedArray(int* arr, int target, int n) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] >= arr[0]) {  
            if(target >= arr[start] && target <= arr[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else {
            if( target >= arr[mid]  && target <= arr[end]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int arr[] = {8};
    int target = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = searchInRotatedArray(arr, target, n);
    cout << ans << endl;
    return 0;
}