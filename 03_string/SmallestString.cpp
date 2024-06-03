#include <iostream>
#include <vector>
using namespace std;

int smallestString(string s) {
    int n = s.size();
    vector<bool> count(256, false);
    for(int i = 0; i < n; i++) {
        if(count[s[i]] == false) {
            count[s[i]] = true;
        }

    }

    for(int i = 0; i < 256; i++) {
        cout << (char) i << " --> " << count[i] << endl;
    }
    return 0;
}

int main() {
    
    string s = "AABBBCBBAC";
    int ans = smallestString(s);

    cout << ans << endl;
    return 0;
}