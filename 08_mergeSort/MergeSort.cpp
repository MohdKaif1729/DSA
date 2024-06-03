#include<iostream>
#include<vector>
#include<string>

using namespace std;

void merge(int *arr, int srt, int end) {

    // Find the size
    int mid = srt + (end - srt) / 2;

    int sizeOfLeftArray = mid - srt + 1;
    int sizeOfRightArray = end - mid;

    // Create two array
    int *leftArray = new int[sizeOfLeftArray];
    int *rightArray = new int[sizeOfRightArray];

    // Copy Values
    
    for(int i = 0; i < sizeOfLeftArray; i++) {
        leftArray[i] = arr[srt + i];
    }

    for(int i = 0; i < sizeOfRightArray; i++) {
        rightArray[i] = arr[mid + 1 + i]; 
    }

    int indexOfLeftArray = 0;
    int indexOfRightArray = 0;
    int indexOfMergeArray = srt;

    while(indexOfLeftArray < sizeOfLeftArray && indexOfRightArray < sizeOfRightArray) {
        if(leftArray[indexOfLeftArray] <= rightArray[indexOfRightArray]) {
            arr[indexOfMergeArray] = leftArray[indexOfLeftArray];
            indexOfLeftArray++;
        }
        else {
            arr[indexOfMergeArray] = rightArray[indexOfRightArray];
            indexOfRightArray++;
        }
        indexOfMergeArray++;
    } 
    while( indexOfRightArray < sizeOfRightArray) {
        arr[indexOfMergeArray] = rightArray[indexOfRightArray];
        indexOfRightArray++;
        indexOfMergeArray++;
    }
    while( indexOfLeftArray < sizeOfLeftArray) {
        arr[indexOfMergeArray] = leftArray[indexOfLeftArray];
        indexOfMergeArray++;
        indexOfLeftArray++;
    }

    delete []leftArray;
    delete []rightArray;

    return;
}

void merge_Sort(int *arr, int srt, int end) {

    // Base Case
    if(srt >= end) {
        return;
    }
    
    int mid = srt + (end - srt) / 2;

    // Sort Left side
    merge_Sort(arr, srt, mid);

    // Sort Right side
    merge_Sort(arr, mid + 1, end);

    // merge two arrays 
    merge(arr, srt, end);

    return;
}

void display(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << endl;

    return;
}

int main() {
    cout << endl;
    int array[] = {4, 5, 1, 8, 2, 6, 3, 7};

    int size = sizeof(array) / sizeof(array[0]);
    display(array, size);

    merge_Sort(array, 0, size - 1);

    display(array, size);

    return 0;
}