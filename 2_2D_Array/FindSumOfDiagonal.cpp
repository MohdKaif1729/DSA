#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; 
    int principleDiagonal = 0; 
    int nonPrincipleDiagonal = 0;
    for(int i = 0, j = 2; i < 3; i++, j--) {
        principleDiagonal += arr[i][i];
        nonPrincipleDiagonal += arr[i][j];

    }

    cout << principleDiagonal << endl;
    cout << nonPrincipleDiagonal << endl;
    return 0;
}