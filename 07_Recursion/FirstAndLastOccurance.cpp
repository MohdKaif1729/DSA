#include<iostream>
#include<vector>
#include<string>

using namespace std;

void firstAndLastOcc(int *arr, int i, int j, int k, vector<int>& ans) {

    if(i > j) {
        return;
    }

    if(arr[i] == k && ans[0] == -1) {
        ans[0] = i;
    }

    else if(arr[j] == k && ans[1] == -1) {
        ans[1] = j;
    }

    else if(arr[i] == k && arr[j] == k && ans[0] == -1 && ans[1] == -1) {
        ans[0] = i;
        ans[1] = j;
        return; 
    }

    firstAndLastOcc(arr, i + 1, j - 1, k, ans);

    return;
}

int main() {

    cout << endl;

    int arr[] = {4,1,2,1,5,2};

    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans(2, -1);

    int k = 2;

    firstAndLastOcc(arr, 0, n - 1, k, ans);

    cout << "first Occ: " << ans[0] << endl;

    cout << "last Occ : " << ans[1] << endl;

    cout << endl;
    return 0;
}