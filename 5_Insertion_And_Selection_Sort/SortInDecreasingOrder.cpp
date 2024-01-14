#include<iostream>
#include<vector>

using namespace std;

int main() {
    system("cls");
    vector<int> v{1, 2, 6, 7, 3};
    int n = v.size();
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n - 1; i++) {
        bool flag = true;
        for(int j = 0; j < n - i - 1; j++) {
            if(v[j] < v[j + 1]) {
                swap(v[j], v[j + 1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}