#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    system("cls");
    string s = "mohd";
    string t = "dhmo";

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t) cout << true;
    else cout << false;
    
    return 0;
}