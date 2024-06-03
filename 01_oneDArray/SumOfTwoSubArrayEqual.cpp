#include <iostream>
using namespace std;

int indexOfSubArray(int* arr, int n) {
    int sumOfSubLeftArray = 0;
    int sumOfArray = 0;
    int index = -1;

    for(int i = 0; i < n; i++) {
        sumOfArray += arr[i];
    } 

    for(int i = 0; i < n; i++) {
        sumOfSubLeftArray += arr[i];
        int sumOfSubRightArray = sumOfArray - sumOfSubLeftArray;
        if(sumOfSubLeftArray == sumOfSubRightArray) {
            index = i;
            break;
        }
    }

    return index;
}

void displaySubArray(int* arr, int index, int n) {

    cout << "Left Array: ";
    for(int i = 0; i <= index; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Right Array: ";
    for(int i = index + 1; i < n; i++) {
        cout << arr[i] << " ";
    }

    return;
}

int main() {
    int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int index = indexOfSubArray(arr, n);
    displaySubArray(arr, index, n);

    return 0;
}