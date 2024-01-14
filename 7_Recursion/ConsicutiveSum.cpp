#include<iostream>
#include<vector>
#include<string>

using namespace std;

void f(int *A, int n) {
    if(n < 0) return;
    for(int j = 0; j <= n; j++) {
        cout << A[j] << " ";
        if(j < n) {
            A[j] = A[j] + A[j + 1];
        }
    }
    cout << endl;
    f(A, n - 1);
    return;
}

int main() {
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    f(arr, n - 1);
    return 0;
}