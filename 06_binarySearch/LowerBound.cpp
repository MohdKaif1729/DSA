#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{1,2,4,5,9,15,18,21,24};
    int x = 18;
    int lo = 0;
    int hi = v.size() - 1;
    bool flag = false;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(v[mid] == x) {
            cout << v[mid - 1] << endl;
            flag = true;
            break;
        }
        else if(x > v[mid] && x < v[mid + 1]) {
            cout << v[mid] << endl;
            flag = true;
            break;
        }
        else if(v[mid] < x) {
            lo = mid + 1;
        }
        else if(v[mid] > x) {
            hi = mid - 1;
        }
    }
    if(flag == false) cout << -1 << endl;
    return 0;
}