#include<iostream>
#include<vector>

using namespace std;

int main() {
    system("cls");

    vector<int> v{5, -4, 3, 2, 1};

    int n = v.size();

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    // T.C --> O(n^2)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 1; j < n - i; j++) {
            if(v[j - 1] > v[j]) {
                int temp = v[j - 1];
                v[j - 1] = v[j];
                v[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}