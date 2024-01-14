#include<iostream>
#include<vector>
#include<string>
#include<climits>

using namespace std;

void display_Array_Ele(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl << endl;
    return;
}

void bubble_Sort_Loop(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    return;
}

void bubble_Sort_Recursive(int *arr, int n) {
    if(n < 0) {
        return;
    }
    int max = INT_MIN;
    int max_idx;
    for(int i = 0; i <= n; i++) {
        if(max < arr[i]) {
            max = arr[i];
            max_idx = i;
        }
    }
    swap(arr[n], arr[max_idx]);  
    bubble_Sort_Recursive(arr, --n);
    return;
}
    

int main() {
    int arr[] = {2, 3, 5, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    display_Array_Ele(arr, n);
    // bubble_Sort_Loop(arr, n);
    bubble_Sort_Recursive(arr, n - 1);
    display_Array_Ele(arr, n);

    return 0;
}