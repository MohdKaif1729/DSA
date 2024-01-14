#include <iostream>
using namespace std;

bool isValid(int* arr, int n, int k, int max) {
    int student = 1;
    int pages = 0;
    for(int i = 0; i < n; i++) {
        pages += arr[i];
        if(pages > max) {
            student++;
            pages = arr[i];
        }
        if(student > k) {
            return false;
        }
    }

    return true;
}

int bookAllocation(int* arr, int n, int k) {
    if(k > n) {
        return -1;
    }
    int start = 0;
    int end = 0;
    int res = -1;
    for(int i = 0; i < n; i++) {
        start = max(start, arr[i]);
        end += arr[i];
    }

    while(start <= end) {
        
        int mid = start + (end - start) / 2;
        
        if(isValid(arr, n, k, mid) == true) {
            res = mid;
            end = mid - 1; 
        }
        else {
            start = mid + 1; 
        }

    }

    return res;
    
}


int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    int ans = bookAllocation(arr, n, k);
    cout << ans << endl;
    return 0;
}