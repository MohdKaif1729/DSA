#include<iostream>
#include<string>

using namespace std;

int main() {
    system("cls");
    string str = "255.100.50.0";

    string ans = "";
   
    int n = str.size();

    for(int i = 0; i < n; i++) {
        if(str[i] == '.') ans += "[.]";
        else ans += str[i];
    }

    cout << ans << endl;
    
    return 0;
}