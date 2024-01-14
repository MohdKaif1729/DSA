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
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j > 0; j--) {
            if(v[j - 1] > v[j]) {
                swap(v[j], v[j - 1]);
            }
        }
       
    }
    
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}