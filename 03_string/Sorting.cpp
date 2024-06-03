#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    cout << str << endl;
    sort(str.begin(), str.end());
    cout << str << endl;

    return 0;
}