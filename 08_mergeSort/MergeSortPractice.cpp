#include <iostream>
using namespace std;

void merge(int* arr, int start, int end) {

    // mid value of array
    int mid = start + (end - start) / 2;

    // size of left array
    int sizeOfLeftArray = mid - start + 1;

    // size of right array
    int sizeOfRightArray = end - mid;

    // left array
    int* rightArray = new int[sizeOfLeftArray];

    // right array
    int* leftArray = new int[sizeOfRightArray];

    // copy left array element
    for(int i = 0; i < sizeOfLeftArray; i++) {
        leftArray[i] = arr[start + i];
    }

    // copy right array element
    for(int i = 0; i < sizeOfRightArray; i++) {
        rightArray[i] = arr[mid + 1 + i];
    } 

    // create indises
    int indexOfLeftArray = 0;
    int indexOfRightArray = 0;
    int indexOfOriginalArray = start;

    // Merge element
    while(indexOfLeftArray < sizeOfLeftArray && indexOfRightArray < sizeOfRightArray) {
        if(leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray]) {
            arr[indexOfOriginalArray++] = leftArray[indexOfLeftArray++];
        }
        else {
            arr[indexOfOriginalArray++] = rightArray[indexOfRightArray++];
        }
    }

    // Copy remaining elements into the right array
    while(indexOfRightArray < sizeOfRightArray) {
        arr[indexOfOriginalArray++] = rightArray[indexOfRightArray++];
    }
    

    // Copy remaining elements into the left array
    while(indexOfLeftArray < sizeOfLeftArray) {
        arr[indexOfOriginalArray++] = leftArray[indexOfLeftArray++];
    }

    // delete left array
    delete []leftArray;

    // delete right array
    delete []rightArray;

    return;

}

void mergeSort(int* arr, int start, int end) {

    // Base case
    if(start >= end) {
        return;
    }

    // mid value
    int mid = start + (end - start) / 2;

    // Sort left array
    mergeSort(arr, start, mid);

    // Sort right array
    mergeSort(arr, mid + 1, end);

    // Merge sorted array
    merge(arr, start, end);

    return;
}

void display(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int main() {
    int arr[] = {4, 5, 1, 8, 2, 6, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n);
    mergeSort(arr, 0, n - 1);
    display(arr, n);

    return 0;
}