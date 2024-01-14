#include<iostream>
#include<vector>
#include<string>

using namespace std;

void sayDigit(int num, vector<string>& str) {
    if(num == 0) return;
    sayDigit(num / 10, str);
    int ans = num % 10;
    cout << str[ans] << " ";
    return;
}

int main() {
    int num;
    cout << "Enter number : ";
    cin >> num;
    vector<string> str{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigit(num, str);
    return 0;
}