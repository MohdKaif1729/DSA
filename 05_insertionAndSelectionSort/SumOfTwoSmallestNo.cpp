#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    vector<int> v{1, 3, 2, 4, 0};
    int n = v.size();
    int No1 = 0, No2 = 0; 

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j > 0; j--) {
            if(v[j - 1] > v[j]) {
                swap(v[j - 1], v[j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        No1 = No1 * 10 + v[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        if(v[i] != v[i - 1]) {
            swap(v[i], v[i - 1]);
            break;
        }  
    }
    for(int i = 0; i < n; i++) {
        No2 = No2 * 10 + v[i];
    }

    cout << No1 << endl;
    cout << No2 << endl;

    cout << "sum of two min no : " << (No1 + No2);

    return 0;
}