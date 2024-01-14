#include<iostream>
#include<vector>

using namespace std;

int main() {
    system("cls");
    string str = "ABCDXXRTKALZZYYDHFOS";
    string ans = "";
    cout << str << endl;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z') {
            ans += str[i];
        }
    }
    
    for(int i = 0; i < ans.size() - 1; i++) {
        bool flag = true;
        for(int j = 0; j < ans.size() - 1 - i; j++) {
            if(ans[j] > ans[j + 1]) {
                char temp = ans[j];
                ans[j] = ans[j + 1];
                ans[j + 1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    cout << ans << endl;

    return 0;
}