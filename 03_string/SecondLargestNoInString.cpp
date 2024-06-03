#include<iostream>
#include<string>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    char chf = '\0';
    char chs = '\0';
    for(int i = 0; i < str.size(); i++) {
        if(chf < str[i]) {
            chs = chf;
            chf = str[i];
        }
    }

    cout << "Largest No. in string : " << chs;

    
    return 0;
}