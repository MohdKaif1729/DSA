#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main() {
    system("cls");
    vector<string> str_arr{"flower", "flow", "flight"};
    string ans = "\0";
    bool flag = true;
    for(int i = 0; i < str_arr[0].size(); i++) {
        string temp(1,str_arr[0][i]);
        for(int j = 1; j < str_arr.size(); j++) {
            if(str_arr[0][i] != str_arr[j][i]){
                flag = false;
                break;
            }
        }
        if(flag == true) ans = ans + temp;
        else break;
    }
    cout << ans << endl;
    return 0;
}