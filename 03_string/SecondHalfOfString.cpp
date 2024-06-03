#include<iostream>
#include<string>

using namespace std;

string second_Half_of_String(string s) {
    int n = s.size();
    string ans = s.substr(n/2);
    return ans;
}

int main() {
    string str;
    cout << "Enter even string : \n";
    getline(cin, str);
    string ans = second_Half_of_String(str);
    cout << ans << endl;
    
    return 0;
}