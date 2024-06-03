#include<iostream>
#include<vector>

using namespace std;

int main() {
    system("cls");
    vector<int> v{5, 0, 1, 2, 0, 0, 4, 0, 3};
    int n = v.size();
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i = 0, j = 0, k = n - 1; i < n; i++) {
        if(v[i] > 0) {
            ans[j] = v[i];
            j++;
        }
        else {
            ans[k] = v[i];
            k--;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}