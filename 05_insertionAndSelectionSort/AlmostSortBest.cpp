#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main() {
    vector<int> v{2, 4, 8, 9, 7};

    int n = v.size();
    bool flag = true;
    for(int i = 0; i < n - 1; i++) {
        if(v[i] > v[i + 1]) {
            swap(v[i], v[i + 1]);
            i++;
        }
    }
    for(int i = 1; i < n; i++) {
        if(v[i - 1] > v[i]) {
            flag = false;
            break;
        }
    }
    cout << "ans : " << flag << endl;
    return 0;
}