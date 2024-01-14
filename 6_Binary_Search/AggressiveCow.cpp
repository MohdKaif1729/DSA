#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int aggresiveCow(vector<int>& stalls, int n, int k) {
    int ans = -1; //1, 2, 5, 7, 10
    int unitbtCow = 1;
    int p = k;
    int start = 0;

    sort(stalls.begin(), stalls.end());

    while(unitbtCow != stalls[n- 1]) {
        int unitDisBtCow = stalls[0];
        p = k;
        start = 0;

        while(p != 0 && start != n) {
            if(stalls[start] >= unitDisBtCow) {
                unitDisBtCow = stalls[start] + unitbtCow;
                p--;
            }
            start++;
        }

        if(p == 0) {
            ans = unitbtCow;
        }

        else {
            break;
        }

        unitbtCow++;
    }

    return ans;

}


int main() {
    vector<int> stalls{10, 1, 2, 7, 5};

    int n = stalls.size();
    int NoOfcows = 3;

    cout << aggresiveCow(stalls, n, NoOfcows) << endl;
    // aggresiveCow(stalls, n, NoOfcows);

    return 0;
}