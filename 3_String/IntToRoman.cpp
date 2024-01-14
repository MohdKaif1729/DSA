#include <iostream>
#include <cmath>
using namespace std;

string romanNum(int roman) {
    if(roman == 1) {
        return "I";
    }
    else if(roman == 2) {
        return "II";
    }
    else if(roman == 3) {
        return "III";
    }
    else if(roman == 4) {
        return "IV";
    }
    else if(roman == 5) {
        return "V";
    }
    else if(roman == 6) {
        return "VI";
    }
    else if(roman == 7) {
        return "VII";
    }
    else if(roman == 8) {
        return "VIII";
    }
    else if(roman == 9) {
        return "IX";
    }
    else if(roman == 10) {
        return "X";
    }
    else if(roman == 20) {
        return "XX";
    }
    else if(roman == 30) {
        return "XXX";
    }
    else if(roman == 40) {
        return "XL";
    }
    else if(roman == 50) {
        return "L";
    }
    else if(roman == 60) {
        return "LX";
    }
    else if(roman == 70) {
        return "LXX";
    }
    else if(roman == 80) {
        return "LXXX";
    }
    else if(roman == 90){
        return "XC";
    }
    else if(roman == 100) {
        return "C";
    }
    else if(roman == 200) {
        return "CC";
    }
    else if(roman == 300) {
        return "CCC";
    }
    else if(roman == 400) {
        return "CD";
    }
    else if(roman == 500) {
        return "D";
    }
    else if(roman == 600) {
        return "DC";
    }
    else if(roman == 700) {
        return "DCC";
    }
    else if(roman == 800) {
        return "DCCC";
    }
    else if(roman == 900){
        return "CM";
    }
    if(roman == 1000) {
        return "M";
    }
    else if(roman == 2000) {
        return "MM";
    }
    else if(roman == 3000){
        return "MMM";
    }
}

int countDigits(int num) {
    int count = 0;
    while(num) {
        count++;
        num /= 10;
    }
    return (count - 1);
}

int main() {
    int num = 78;
    int count = countDigits(num);

    string ans;

    while(count >= 0) {
        int a = pow(10, count);
        int b = num / a;
        int c = b * a;
        ans += romanNum(c);
        count--;
        num = num % a;
    }

    cout << ans << endl;

  

    return 0;
}