#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    int n = str.size();
    char ch;
    string s = str;
    int ans = INT_MIN;
    if(n == 1){
        ch = str[0];
        ans = 1;
    }
    for(int i = 0; i < n - 1; i++) {
        int cnt = 1;
        
        if(str[i] == '\0') continue;
        for(int j = i + 1; j < n; j++) {
           
            if(str[i] == str[j]) {
                cnt++;
                str[j] = '\0';
            }
        }
        if(ans < cnt) { 
            ans = cnt;
            ch = str[i];
        }
    }
    cout << ch << " repeat in " << '\"' << s << '\"' << " " << ans << " times!" << endl;
    return 0;
}