#include <iostream>
#include <vector>
using namespace std;

int largestSubString(string& str) {

    int ans = -1;

    for(int i = 0; i < str.size(); i++) {
        bool flag = true;
        int j = i;
        int count = 0;
        vector<bool> v(256, false);
        while(flag == true && j < str.size()) {
            if(v[str[j]] == true) {
                flag = false;
            }
            else {
                count++;
                v[str[j]] = true;
            }
            j++;
        }


        if(ans < count) {

            ans = count;
        }


    }

    return ans;

}

int main() {
    
    string str = "abcabcbb";

    
    int ans = largestSubString(str);

    cout << ans << endl;

    return 0;
}