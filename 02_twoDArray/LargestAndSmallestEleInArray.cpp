#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(min > arr[i][j]) {
                min = arr[i][j];
            }
            if(max < arr[i][j]) {
                max = arr[i][j];
            }

        }
    }

    cout << min << " " << max;

    return 0;
}