#include <iostream>
#include <vector>
using namespace std;

string caseSort(string str, int n) { 
    // your code here
    vector<int> lowerInt(26, 0);
    vector<int> upperInt(26, 0);
    string lowerChar;
    string upperChar;

    for(int i  = 0; i < n; i++) {
        
        if(str[i] >= 'a') {
            lowerInt[str[i] - 'a']++;
            str[i] = '#';
        }
        else {
            upperInt[str[i] - 'A']++;
            str[i] = '$';
        }
    }
    
    // lower 
    for(int i = 0; i < 26; i++) {
        char ch = i + 'a';
        while(lowerInt[i]) {
            lowerChar += ch;
            lowerInt[i]--;
        }
    }
    
    // upper
    for(int i = 0; i < 26; i++) {
        char ch = i + 'A';
        while(upperInt[i]) {
            upperChar += ch;
            upperInt[i]--;
        }
    }
    
    for(int i = 0, j = 0, k = 0; i < n; i++) {
        if(str[i] == '#') {
            str[i] = lowerChar[j];
            j++;
        }
        else {
            str[i] = upperChar[k];
            k++;
        }
    }
    
    return str;
    
}

int main() {
    string str = "defRTSersUXI"; // deeIRSfrsTUX

    string ans = caseSort(str, str.size());

    cout << ans << endl;

    return 0;
}