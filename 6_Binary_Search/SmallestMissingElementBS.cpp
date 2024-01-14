#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{1,2,3,5,8,9,12};
    int x = v[0];
    int lo = 0;
    int hi = v.size() - 1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(v[mid] == mid) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << lo << endl;
    return 0;
}