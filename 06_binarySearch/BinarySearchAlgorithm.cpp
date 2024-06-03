#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 3;
    int lo = 0;
    int hi = v.size() - 1;
    bool flag = false;
    while(lo <= hi) {   
        int mid = lo +  (hi - lo) / 2;
        if(v[mid] == target) {
            cout << "Present";
            flag = true;
            break;
        }
        else if(v[mid] < target) lo = mid + 1;
        else if(v[mid] > target) hi = mid - 1;
    }

    if(flag == false) cout << "Not Present";

    return 0;
}