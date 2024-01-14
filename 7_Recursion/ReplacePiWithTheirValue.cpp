#include<iostream>
#include<vector>
#include<string>

using namespace std;

void Replace_Pi(string& str, int i, int j) {

    if(j >= str.length()) {
        return;
    }

    else if(str[i] == 'p' && str[j] == 'i') {
        cout << "3.14";
        Replace_Pi(str, i + 2, j + 2);
    }

    else if(str[i] != 'p' || str[j] != 'i') {
        cout << str[i];
        Replace_Pi(str, i + 1, j + 1);
    }

    else {
        Replace_Pi(str, i + 1, j + 1);
    }
    

    return;

}



int main() {
    cout << endl;

    // 3.14ppp3.14iii3.14
    string str = "pippxxxppiiiipi";

    Replace_Pi(str, 0, 1);

    cout << endl;

    cout << endl;
    return 0;
}