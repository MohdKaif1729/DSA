#include <iostream>
using namespace std;

int main() {
    int arr1[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int arr2[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int ans[3][3]; 

    int rows_arr1 = sizeof(arr1) / sizeof(arr1[0]);
    int cols_arr1 = sizeof(arr1[0]) / sizeof(arr1[0][0]);
    int rows_arr2 = sizeof(arr2) / sizeof(arr2[0]);
    int cols_arr2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);

    for(int i = 0; i < rows_arr1; i++) {
        for(int j = 0; j < cols_arr1; j++) {
            ans[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for(int i = 0; i < rows_arr1; i++) {
        for(int j = 0; j < cols_arr1; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}