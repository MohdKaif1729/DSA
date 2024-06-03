#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 3, 7, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        cout << "size" << i + 1 << ": ";
        for(int j = 0; j < n - i; j++) {
            for(int k = j; k <= j + i; k++) {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
} 