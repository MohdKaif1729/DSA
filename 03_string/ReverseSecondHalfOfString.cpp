#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter a string : \n";
    getline(cin, s);
    int n = s.size();

    cout << s << endl;
    reverse(s.begin() + n/2, s.end());

    cout << s << endl; 
 
 

    return 0;
}