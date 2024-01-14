#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    system("cls");
    string s = "egg";
    string t = "add";
    vector<char> ans1(150, '\0');
    vector<char> ans2(150, '\0');
    for(int i = 0; i < s.size(); i++) {
        int idxs = (int)s[i];
        int idxt = (int)t[i];
        if(ans1[idxs] == '\0') ans1[idxs] = t[i];
        if(ans2[idxt] == '\0') ans2[idxt] = s[i];
    }
    bool flag = true;
    for(int i = 0; i < s.size(); i++) {
        int idxs = (int)s[i];
        if(ans1[idxs] != t[i]) {
            flag =  false;
            break;
        }
        int idxt = (int)t[i];
        if(ans2[idxt] != s[i]) {
            flag =  false;
            break;
        }
    }
    cout << flag;
    return 0;
}