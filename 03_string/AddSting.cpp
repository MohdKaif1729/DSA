#include <iostream>
#include <algorithm>
using namespace std;

string addString(string& str1, string& str2) {
    int carry = 0; 
    int sum = 0; 
    string ans;

    int num1;
    int num2;

    int i = str1.size() - 1;
    int j = str2.size() - 1;
    
    while(i >= 0 && j >= 0) {
        num1 = (int)str1[i] - '0';
        num2 = (int)str2[j] - '0';
        sum = (num1 + num2 + carry) % 10;
        carry = (num1 + num2 + carry) / 10;
        ans += (char)sum + '0';
        i--;
        j--;
    }

    while(i < 0 && j >= 0) {
        num2 = (int)str2[j] - '0';
        sum = (num2 + carry) % 10;
        carry = (num2 + carry) / 10;
        ans += (char)sum + '0';
        j--;
    }

    while(j < 0 && i >= 0) {
        num1 = (int)str1[i] - '0';
        sum = (num1 + carry) % 10;
        carry = (num1 + carry) / 10;
        ans += (char)sum + '0';
        i--;
    }

    cout << num1 << " " << num2 << " " <<carry << endl;
    if(carry) {
        ans += (char)carry + '0';
    }


    reverse(ans.begin(), ans.end());


    return ans;
}

int main() {
    string str1 = "456";
    string str2 = "77";
    string ans = addString(str1, str2);

    cout << ans << endl;
    return 0;
}