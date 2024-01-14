#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool checkPresent(int *A, int n, int k) {
    if(n <= 0) return false;
    if(A[n - 1] == k) return true;
    return checkPresent(A, --n, k);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    cout << checkPresent(arr, n, k) << endl;
    return 0;
}