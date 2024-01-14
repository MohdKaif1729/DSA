#include<iostream>
#include<string>

using namespace std;

int sub_String_Of_Vowels(string s) {
    int ans = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u') {
            ans++;
        }
    }
    cout << ans;
    bool flag = true;
    int cnt = 1;
    for(int i = 1; i < s.size(); i++) {//"hgdhpw"
        if((s[i-1] == 'a'||s[i-1] == 'e'||s[i-1] == 'i'||s[i-1] == 'o'||s[i-1] == 'u') && (s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')) {
                cnt++;
                flag = true;
                if(i == s.size() - 1) flag = false;
                cout << "kaif : " << cnt << endl;
        }
        else {
            flag = false;
        }
        if(cnt == 2 && flag == false) {
            ans += 1;
            cnt = 1;
        }
        
        else if(cnt == 3 && flag == false) {
            ans += 4;
            cnt = 1;
        }
        else if(cnt == 4 && flag == false) {
            ans += 9;
            cnt = 1;
        }
        else if(cnt == 5 && flag == false) {
            ans += 16;
            cnt = 1;
        }
        
    }

    return ans;
}

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);

    int result = sub_String_Of_Vowels(str);

    cout << "Sub String Using Vowels : " << result;

    return 0;
}