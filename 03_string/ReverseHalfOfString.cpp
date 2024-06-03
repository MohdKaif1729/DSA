#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string str = "mohdkaif";
    int n = str.size();
    cout << str << endl;

    reverse(str.begin(), str.begin() + (n/2));

    cout << str << endl;
    return 0;
}