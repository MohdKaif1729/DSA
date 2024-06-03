#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printIn_Rev(int *A, int n) {
    if(n < 0) return;
    cout << A[n] << " ";
    printIn_Rev(A, n - 1);
    return;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    printIn_Rev(arr, n - 1);
    return 0;
}