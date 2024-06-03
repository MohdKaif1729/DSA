#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printArrayEle(int *arr, int idx, int n) {
    if(idx == n) return;
    cout << arr[idx] << endl;
    printArrayEle(arr, idx + 1, n);
    return;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx = 0;
    printArrayEle(arr, idx, n);
    return 0;
}