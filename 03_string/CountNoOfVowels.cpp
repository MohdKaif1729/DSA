#include<iostream>
#include<string>

using namespace std;

int main() {
    string str = "mohd kaif";
    int cnt = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}