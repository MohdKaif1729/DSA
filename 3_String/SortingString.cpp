#include <iostream>
#include <vector>
using namespace std;

string sort(string& str) {
    // constant space 
    // vector<string> ans(26, "");

    // for(int i = 0; i < str.length(); i++) {
    //     int index = str[i] - 'a';
    //     ans[index] += str[i];
    // }

    // str.clear();
    // for(int i = 0; i < 26; i++) {
    //     str += ans[i];
    // }

    // return str;

    vector<int> alpha(26, 0);
    
    for(int i = 0; i < str.size(); i++) {
        int index = str[i] - 'a';
        alpha[index]++;
    }
    
    int iterate = 0;
    for(int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        
        while(alpha[i]) {
            str[iterate] = ch;
            iterate++;
            alpha[i]--;
        }
    }
    
    return str;

}

int main() {
    string str = "ebacd";

    string ans = sort(str);

    cout << ans << endl;

    return 0;
}