#include<iostream>
#include<string>

using namespace std;

int main() {

    // Very very important function in string
    string str = "abcde";
    cout << str << endl;
    cout << str.substr() << endl;
    cout << str.substr(0) << endl;
    cout << str.substr(2) << endl;
    cout << str.substr(1,3) << endl;

    return 0;
}