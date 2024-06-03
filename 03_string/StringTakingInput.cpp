#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    // cin >> str; // Onlyif the given string has no spaces
    getline(cin, str);
    cout << str;
    return 0;
}