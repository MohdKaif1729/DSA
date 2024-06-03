#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    int n = str.size();
    
    cout << str << endl;
    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) {
            str[i] = '#';
        }
    }

    cout << str << endl;

    return 0;
}