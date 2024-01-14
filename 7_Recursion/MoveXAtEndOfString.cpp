#include<iostream>
#include<vector>
#include<string>

using namespace std;

string Move_At_End(string str, char target) {

    if(str.size() == 0) {
        return "";
    }


    char first_Ele = str[0];

    string ans = Move_At_End(str.substr(1), target);

    if(first_Ele == target) {
        return (ans + first_Ele);
    }

    return (first_Ele + ans);
}

int main() {
    cout << endl;
    
    string str = "axxbdxcefxhix";
    
    char target = 'x';

    cout << Move_At_End(str, target);
   
    cout << endl;
    return 0;
}