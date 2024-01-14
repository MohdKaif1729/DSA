#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    int x = 6;
    int lo = 0;
    int hi = x;
    bool flag = false;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(mid * mid == x) {
            flag = true;
            break;
        }
        else if(mid * mid < x) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    if(flag == true) cout << "Perfect Sq Root";
    else cout << "Not A Perfect Sq Root";
    return 0;
}