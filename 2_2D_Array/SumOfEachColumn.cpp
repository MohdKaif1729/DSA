#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for(int i = 0; i < 4; i++) {
        int total_Sum = 0;
        for(int j = 0; j < 3; j++) {
            total_Sum += arr[j][i];
        }
        cout << total_Sum << " ";
    }

    return 0;
}