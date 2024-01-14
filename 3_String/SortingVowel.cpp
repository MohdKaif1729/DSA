#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string sortVowel(string str) {
    
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'| str[i] == 'u') {
            lower[str[i] - 'a']++;
            str[i] = '$';
        }
        else if(str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O'| str[i] == 'U') {
            upper[str[i] - 'A']++;
            str[i] = '$';
        }
    }
    string sortVowel = "";
    for(int i = 0; i < 26; i++) {
        char ch = 'A' + i;
        while(upper[i]) {
            sortVowel += ch;
            upper[i]--;

        }
    }
    for(int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        while(lower[i]) {
            sortVowel += ch;
            lower[i]--;

        }
    }
    int index = 0;
    int i = 0;
    while(index < sortVowel.size()) {
        if(str[i] == '$') {
            str[i] = sortVowel[index];
            index++;
        }
        i++;
    }
    return str;
 
}

int main() {
    string str = "leetcode";
    string ans = sortVowel(str);

    cout << ans << endl;
    return 0;
}