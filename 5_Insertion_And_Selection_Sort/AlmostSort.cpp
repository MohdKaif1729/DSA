#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

int main() {
    vector<int> v{4, 2, 7, 9, 8};

    int n = v.size();
    bool flag = true;
    for(int i = 0; i < n; i++) {
        int idx = 0;
        for(int j = 0; j < n; j++) {
            if(v[i] > v[j]) {
                idx++;
            }  
        }
        int diff = idx - i;
        if(diff < 0) diff = -diff;
        if(diff > 1) {
            flag = false;
            break;
        }
    }
    cout << "ans : " << flag << endl;
    return 0;
}