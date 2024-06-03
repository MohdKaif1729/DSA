#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool sorted_Or_Not(int *A, int n) {
    if(n == 0 || n == 1) {
        return true;
    } else {
        n--;
        if(A[n] > A[n - 1]) {
            return sorted_Or_Not(A, n);
        }
        else {
            return false;
        }
    }
    
}

int main() {
    int arr[] = {1,2,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool result = sorted_Or_Not(arr, n);
    if(result) {
        cout << "Sorted";
    } else {
        cout << "UnSorted";
    }
    return 0;
}