#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    system("cls");
    vector<string> str{"mohdkaif","aarim","dishant","faiz","om","aman","alaman","ankit"};
    int n = str.size();
    for(int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    cout << endl;
    
    for(int i = 0; i < n - 1; i++) {
        bool flag = true;
        for(int j = 0; j < n - i - 1; j++) {
            if(str[j] > str[j + 1]) {
                swap(str[j], str[j + 1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    
    for(int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    cout << endl;

    return 0;
}