#include <iostream>
#include <vector>
using namespace std;

void display(int (*arr)[4], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    return;

}

void reverseColumns(int (*arr)[4], int n, int m) {
    for(int j = 0; j < m; j++) {
        int start = 0; 
        int end = n - 1;

        while(start < end) {
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }

    return;
}

// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     int min_row = 0; 
//     int max_row = n - 1;
//     int min_col = 0; 
//     int max_col = m - 1;
//     int stored_Element = 0;
//     int total_Element = n * m;
//     vector<int> ans(n * m);

//     while(stored_Element < total_Element) {

//         // first row printed
//         for(int i = min_col; i <= max_col; i++) {
//             if(stored_Element >= total_Element) {
//                 break;
//             }
//             ans[stored_Element] = matrix[min_row][i];
//             stored_Element++;
//         }
//         min_row++;

//         // last column printed
//         for(int i = min_row; i <= max_row; i++) {
//             if(stored_Element >= total_Element) {
//                 break;
//             }
//             ans[stored_Element] = matrix[i][max_col];
//             stored_Element++;
//         }
//         max_col--;

//         // last row printed
//         for(int i = max_col; i >= min_col; i--) {
//             if(stored_Element >= total_Element) {
//                 break;
//             }
//             ans[stored_Element] = matrix[max_row][i];
//             stored_Element++;
//         }
//         max_row--;

//         // first column printed
//         for(int i = max_row; i >= min_row; i--) {
//             if(stored_Element >= total_Element) {
//                 break;
//             }
//             ans[stored_Element] = matrix[i][min_col];
//             stored_Element++;
//         }
//         min_col++;

//     }

//     return ans;
// }

vector<vector<int>> spiralOrder(int size) {
    int n = size;
    int m = size;
    int min_row = 0; 
    int max_row = n - 1;
    int min_col = 0; 
    int max_col = m - 1;
    int stored_Element = 0;
    int total_Element = n * m;
    vector<vector<int>> ans(n, vector<int>(m, 0));

    while(stored_Element < total_Element) {

        // first row printed
        for(int i = min_col; i <= max_col; i++) {
            if(stored_Element >= total_Element) {
                break;
            }
            ans[min_row][i] = stored_Element + 1;
            stored_Element++;
        }
        min_row++;

        // last column printed
        for(int i = min_row; i <= max_row; i++) {
            if(stored_Element >= total_Element) {
                break;
            }
            ans[i][max_col] = stored_Element + 1;
            stored_Element++;
        }
        max_col--;

        // last row printed
        for(int i = max_col; i >= min_col; i--) {
            if(stored_Element >= total_Element) {
                break;
            }
            ans[max_row][i] = stored_Element + 1;
            stored_Element++;
        }
        max_row--;

        // first column printed
        for(int i = max_row; i >= min_row; i--) {
            if(stored_Element >= total_Element) {
                break;
            }
            ans[i][min_col] = stored_Element + 1;
            stored_Element++;
        }
        min_col++;

    }

    return ans;
}

vector<int> downwardDiagonal(int N, vector<vector<int>> A) {
    // Your code goes here
    vector<int> ans;
    
    
    // above diagonal elements
    int cols = 0;
    while(cols < N) {
        int i = 0;
        int j = cols;
        
        while(j >= 0) {
            ans.push_back(A[i][j]);
            i++;
            j--;
            
            
        }
        
        cols++;
        
    }
    
    // below diagonal elements
    int row = 1;
    while(row < N) {
        int i = row;
        int j = N - 1;
        
        while(i < N) {
            ans.push_back(A[i][j]);
            i++;
            j--;
            
            
        }
        
        row++;
        
    }
    
    
    
    
    
    
    
    // return ans vector
    return ans;
    
}

int main() {
    // int arr[3][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 0, 1, 2}
    // };

    // vector< vector<int> > arr{
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 0, 1, 2}
    // };

    // int n = sizeof(arr) / sizeof(arr[0]);
    // int m = sizeof(arr[0]) / sizeof(arr[0][0]);

    // display(arr, n, m);
    // reverseColumns(arr, n, m);
    // display(arr, n, m);

    // vector<vector<int>> ans = spiralOrder(4);

    // int n = ans.size();
    // int m = ans[0].size();

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector< vector<int> > arr{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}, 
        {13, 14, 15, 16}
    };

    // int n = sizeof(arr) / sizeof(arr[0]);
    // int m = sizeof(arr[0]) / sizeof(arr[0][0]);

    swap(arr[0], arr[1]);

    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
    // vector<int> ans = downwardDiagonal(4, arr);

    // for(int i = 0; i < 4 * 4; i++) {
    //     cout << ans[i] << " ";
    // }

    return 0;
}