#include<iostream>
#include<string>

using namespace std;

int main() {
    string s;
    cout << "Enter a string : \n";
    getline(cin, s);
    int n = s.size();
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            cnt++;
        }
    }
 
    cout << "Consonants in a string : " << cnt;
    return 0;
}