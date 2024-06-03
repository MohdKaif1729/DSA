#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string str = "abcde";
    // cout << str << endl;
    // Reverse full string 
    // reverse(str.begin(),str.end());
    // cout << str << endl;

    // Reverse part of string 
    reverse(str.begin() + 1,str.end() - 1);
    cout << str << endl;
    return 0;
}