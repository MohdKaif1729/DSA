#include <iostream>
using namespace std;

int majorityElement(int* arr, int n) {
    int start = 0;
    int ans = 0;
    while(start != n) {
        if(ans % n == 0) {
            ans = arr[start];
        }

        else if(ans % n == arr[start]) {
            ans += n;
        }

        else { 
            if(ans - n < 0) {
                ans = 0;
            }
            else {
                ans -= n;
            }
        }

        start++;
    }

    return (ans % n);
}

int main() {
    int arr[] = {3, 2, 1, 2, 1, 1, 1, 2, 3, 3, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = majorityElement(arr, n);
    cout << ans << endl;
    return 0;
}