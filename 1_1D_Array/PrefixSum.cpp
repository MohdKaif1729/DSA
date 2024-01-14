#include <iostream>
using namespace std;

int main() {
    int arr[] = {6, 4, 5, -3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* prefixSumArray = new int[n];
    prefixSumArray[0] = arr[0];
    for(int i = 1; i < n; i++) {
        prefixSumArray[i] = prefixSumArray[i - 1] + arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << prefixSumArray[i] << " ";
    }


    delete []prefixSumArray;
    return 0;
}