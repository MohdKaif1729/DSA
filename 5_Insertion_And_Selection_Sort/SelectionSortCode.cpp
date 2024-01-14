#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main() {
    system("cls");
    vector<int> v{3, 4, 1, 2, 5};
    int n = v.size();
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    int idx = -1;
    for(int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        for(int j = i; j < n; j++) {
            if(v[j] < min) {
                min = v[j];
                idx = j;
            }
        }
        int temp = v[idx];
        v[idx] = v[i];
        v[i] = temp;
    }
    
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}