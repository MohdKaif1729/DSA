#include <iostream>
using namespace std;

string ipAddress(string str) {
    string ans = "";
    
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '.') {
            ans += "[.]";
        }
        else {
            ans += str[i];
        }
    }

    return ans;

}

int main() {
    string str = "1.1.1.1";

    string ans = ipAddress(str);

    cout << ans << endl;

    return 0;
}