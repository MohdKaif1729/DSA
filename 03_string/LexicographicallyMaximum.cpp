#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    stringstream SS(str);
    string temp;
    
    vector<string> ans;
    while(SS>>temp) {
        ans.push_back(temp);
    }
    string cnt = "\0";
    for(int i = 0; i < ans.size(); i++) {
        string ch = ans[i];
        if(cnt < ch){
            cnt = ch;
        }
    }

    cout << "ans : " << /*ans[ans.size() - 1];*/ cnt;

    return 0;
}