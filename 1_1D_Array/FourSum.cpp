// 26 46 20 11 37 7 13 8 18 37 8 36

#include <iostream>
using namespace std;


bool find4Numbers(int A[], int n, int X) {
    // sort the array 
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(A[i] > A[j]) {
                swap(A[i], A[j]);
            }
        }
    }

    for(int i = 0; i < n - 3; i++) {
        for(int j = i + 1; j < n - 2; j++) {
            int start = j + 1;
            int end = n - 1;
            int find = X - (A[i] + A[j]);
            
            while(start < end) {
                if(A[start] + A[end] == find) {
                    return true;
                }
                
                else if(A[start] + A[end] < find) {
                    start++;
                }
                
                else {
                    end--;
                }
            }
        }
    }
    
    return false;
}

int main() {
    int arr[] = {26, 46, 20, 11, 37, 7, 13, 8, 18, 37, 8, 36};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 42;
    cout << find4Numbers(arr, n, X);
    return 0;
}
