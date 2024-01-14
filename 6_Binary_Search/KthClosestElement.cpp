#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    vector<int> arr{1,1,1,10,10,10};
    int k = 1;
    int x = 9;
    int n = arr.size();
    vector<int> ans(k);

    // if x < arr[0] case 1
    if(x < arr[0]) {
        int i = 0;
        while(i != k) {
            ans[i] = arr[i];
            i++;
        }
        // return ans;
    }
    
    // if x > arr[n - 1] case 2
    if(x > arr[n - 1]) {
        int i = 0;
        int j = n - 1;
        while(i != k) {
            ans[i] = arr[j];
            i++;
            j--;
        }
        // return ans;
    }

    // Normal Element Is Present in array case 3 & 4
    int lo = 0;
    int hi = n - 1;
    int idx = -1;
    while(lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == x) {
            idx = mid;
            break;
        }
        else if(arr[mid] < x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(idx != -1) {
        int i = idx - 1;
        int j = idx + 1;
        int y = 1;
        ans[0] = arr[idx];
        while(y != k) {
            int diffOfI = x - arr[i];
            int diffOfJ = x - arr[j];
            if((diffOfI < 0 || diffOfJ < 0) && i > -1 && j < n) {
                diffOfI = -diffOfI;
                diffOfJ = -diffOfJ;
            }
            if((diffOfI < diffOfJ) && i > -1 && j < n) {
                ans[y] = arr[i];
                i--;
                y++;
            }
            else if((diffOfI > diffOfJ) && i > -1 && j < n) {
                ans[y] = arr[j];
                j++;
                y++;
            }
            else if((diffOfI == diffOfJ) && i > -1 && j < n){
                ans[y] = arr[i];
                i--;
                y++;
                ans[y] = arr[j];
                j++;
                y++;
            }
            if(i < 0) {
                ans[y] = arr[j];
                j++;
                y++;
            }
            if(j > n) {
                ans[y] = arr[i];
                i--;
                y++;
            }
        }
    }
    // return ans;

    // Element is not present in array case 5 & 6
    // hi is lower bound and lo is upper bound
    // 1,1,1,10,10,10
    //     hi lo
    // k = 1 & x = 9
    int i = hi;
    int j = lo;
    cout << "lo : " << lo << " " << "hi : " << hi << endl;
    int y = 0;
    while(y != k) {
        int diffOfI = x - arr[i];
        int diffOfJ = x - arr[j];
        if(diffOfI < 0 && i > -1 && j < n) {
            diffOfI = -diffOfI;
        }
        if(diffOfJ < 0 && i > -1 && j < n) {
            diffOfJ = -diffOfJ;
        }
        if((diffOfI < diffOfJ) && i > -1 && j < n) {
            ans[y] = arr[i];
            i--;
            y++;
            cout <<"B"<< "I : " << diffOfI << " " << "J : "<<diffOfJ << endl;
        }
        else if((diffOfI > diffOfJ) && i > -1 && j < n) {
            ans[y] = arr[j];
            j++;
            y++;
            cout <<"C"<< "I : " << diffOfI << " " << "J : "<<diffOfJ << endl;
        }
        else if((diffOfI == diffOfJ) && i > -1 && j < n) {
            ans[y] = arr[i];
            i--;
            y++;
            ans[y] = arr[j];
            j++;
            y++;
            cout <<"D"<< "I : " << diffOfI << " " << "J : "<<diffOfJ << endl;
        }
        if(i < 0) {
            ans[y] = arr[j];
            j++;
            y++;
        }
        if(j > n) {
            ans[y] = arr[i];
            i--;
            y++;
        }
    }
    // return ans;
    sort(ans.begin(), ans.end());
    for(int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    cout << endl << "idx : " << idx;
    return 0;
}   