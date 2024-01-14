#include<iostream>

using namespace std;

int main() {
    // char str[] = {'a','b','c','d','e'};
    char str2[] = "abcde";
    for(int i = 0; str2[i] != '\0'; i++) {
        cout << str2[i] << " ";
    }

    // cout << str2;

    // cout << (int)(str[5]);
    return 0;
}