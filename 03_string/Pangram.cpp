#include <iostream>
#include <vector>
using namespace std;

bool pangram(string& sentence) {
    // contant space 
    vector<int> checkPangram(26, 0);
    int n = sentence.length();
    
    // updating values  
    for(int i = 0; i < n; i++) {
        int index = sentence[i] - 'a';
        checkPangram[index]++; 
    }

    // check is pangram
    for(int i = 0; i < 26; i++) {
        if(checkPangram[i] == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string sentence = "thequickbrownfoxumpsoverthelazydog";

    bool ans = pangram(sentence);

    cout << ans <<endl;

    return 0;
}