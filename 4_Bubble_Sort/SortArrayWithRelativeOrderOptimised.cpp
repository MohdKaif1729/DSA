#include<iostream>
#include<vector>

using namespace std;

int main() {
    system("cls");
    vector<int> v{5, 0, 1, 2, 0, 0, 4, 0, 3};
    int n = v.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 0, j = 0; i < n; i++) {
        if(v[i] > 0) {
            v[j] = v[i];
            j++;
            cnt++;
        }
    }
    for(int i = cnt; i < n; i++) {
        v[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        cout <<  v[i] << " ";
    }
    cout << endl;
    return 0;
}