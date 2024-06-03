#include <iostream>
#include <vector>
using namespace std;

int kthMissingEle(int* arr, int n, int k) {
    // int ans = -1;
    // int i = 0;
    // int num = 1;

    // while(i < n) {
    //     if(k == 0) {
    //         break;
    //     }
    //     if(arr[i] == num) {
    //         i++;
    //         num++;
    //     }
    //     else {
    //         ans = num;
    //         num++;
    //         k--;
    //     }
    // }
    // return ans;

    // Binary Search
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        int noOfMisEleCurr = arr[mid] - mid - 1;
        int noOfMisElePre = arr[mid - 1] - mid;
        if(k >= noOfMisElePre && k <= noOfMisEleCurr) {
            int temp = noOfMisEleCurr - k;
            int ans = arr[mid] - temp - 1;
            return ans;
        }
        else if(k > noOfMisEleCurr) {
            start = mid + 1;
        }
        else if(k < noOfMisEleCurr) {
            end = mid - 1;
        }
    }

    return -1;
    
}


int main() {
    int arr[] = {2, 3, 4, 7, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    int ans = kthMissingEle(arr, n, k);
    cout << ans << endl;

    return 0;
}