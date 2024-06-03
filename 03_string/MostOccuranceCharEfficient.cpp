#include<iostream>
#include<string>
#include<climits>
#include<vector>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    int n = str.size();
    char ch;
    vector<int> v(26,0);
    for(int i = 0; i < n; i++) {
        int k = (int)str[i] - 97;
        v[k]++;
    }
    int ans = INT_MIN;
    for(int i = 0; i < 26; i++) {
        if(ans < v[i]) {
            ans = v[i];
            ch = (char)(i + 97);
        }
    }

    cout << ch << " --> " << ans;
    return 0;
}