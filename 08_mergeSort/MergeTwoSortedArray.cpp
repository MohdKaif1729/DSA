#include<iostream>
using namespace std;

int* merge(int *arr, int sizeOfArr, int *brr, int sizeOfBrr) {
    int *ans = new int[sizeOfArr + sizeOfBrr];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < sizeOfArr && j < sizeOfBrr) {
        if(arr[i] < brr[j]) {
            ans[k] = arr[i];
            i++;
        }
        else {
            ans[k] = brr[j];
            j++;
        }
        k++;
    } 
    while( j < sizeOfBrr) {
        ans[k] = brr[j];
        j++;
        k++;
    }
    while( i < sizeOfArr) {
        ans[k] = arr[i];
        k++;
        i++;
    }
    return ans;
}

void display(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return;
}

int main() {
    int arr[] = {2, 3, 5, 12, 45, 78, 90};
    int brr[] = {1, 4, 6, 7, 8};
    
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    int sizeOfBrr = sizeof(brr) / sizeof(brr[0]);
    
    int* resultantArray = merge(arr, sizeOfArr, brr, sizeOfBrr);
    int sizeOfFinalArray = sizeOfArr + sizeOfBrr;

    display(resultantArray, sizeOfFinalArray);

    return 0;
}