#include<iostream>
#include<string>

using namespace std;

int main() {
    string s1 = "abc";
    cout << s1 << endl;

    string s2 = "de";
    cout << s2 << endl;

    string s3 = s1 + s2;  // Modify the string 
    cout << s3 << endl;

    string s4 = s1 + "xyz";
    cout << s4 << endl;
    
    string s5 = "xyz" + s1;
    cout << s5 << endl;

    string s6 = 'w' + s1;
    cout << s6 << endl;

    string s7 = s1 + 'k';
    cout << s7 << endl;

    return 0;
}