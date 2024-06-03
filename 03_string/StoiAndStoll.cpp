#include<iostream>
#include<string>

using namespace std;

int main() {
    system("cls");
    string str = "1234567";
    int n = stoi(str);
    cout << n << endl;

    string s = "1234567891244567";
    long long x = stoll(s);
    cout << x << endl;
    return 0;
}