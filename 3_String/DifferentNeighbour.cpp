#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    int ans = 0;
    int n = str.length();

    for(int i = 0; i < n; i++) {
        if(n == 0) break;
        if(n == 2 && str[i] != str[i + 1]){
            ans++;
            break;
        }
        if(i == 0 && str[0] != str[1]) ans++;
        else if(i == n - 1 && str[i - 1] != str[i]) ans++;
        else if(str[i - 1] != str[i] && str[i] != str[i + 1]) ans++;
    }

    cout << ans << endl;


    return 0;
}