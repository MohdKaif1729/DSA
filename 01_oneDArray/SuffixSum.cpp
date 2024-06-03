#include <iostream>
using namespace std;

int main() {
    int arr[] = {6, 4, 5, -3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* suffixSumArray = new int[n];
    suffixSumArray[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        suffixSumArray[i] = arr[i] + suffixSumArray[i + 1];
    }

    for(int i = 0; i < n; i++) {
        cout << suffixSumArray[i] << " ";
    }


    delete []suffixSumArray;
    return 0;
}