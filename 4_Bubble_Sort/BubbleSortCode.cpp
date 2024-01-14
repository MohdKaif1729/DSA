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
        for(int j = 0; j < n - 1; j++) {
            if(v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
           
        }
       
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}