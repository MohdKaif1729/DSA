#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    string ans = str;
    reverse(str.begin(), str.end());
    ans = ans + str;

    cout << ans << endl;
    return 0;
}