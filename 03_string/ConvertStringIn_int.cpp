#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    int n = str.size();
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans *= 10;
        int ASCII = (int)str[i];
        int temp = ASCII - 48;
        ans += temp;
    }

    cout << ans;

    return 0;
}