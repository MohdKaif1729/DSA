#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

bool Armstrong_No(int n) {
    static int x = 0, temp = n;
    if(temp == 0) {
        int valOf_n = n;
        while(valOf_n != 0) {
            n -= pow(valOf_n % 10, x);
            valOf_n /= 10;
        }
        if(n == 0) return true;
        return false;
    }
    x++;
    temp /= 10;
    return Armstrong_No(n);
}

int Armstrong(int n, int d) {
    if(n == 0) return 0;
    return pow(n % 10, d) + Armstrong(n / 10, d);  
} 

int no_Of_Digits(int n) {
    static int x = 0;
    if(n == 0) return x;
    x++;
    return no_Of_Digits(n / 10);
} 

int main() {
    int n;
    cout << "Enter a No .: ";
    cin >> n;
    // if (Armstrong_No(n)) {
    //     cout << "Armstrong No." << endl;
    // } else {
    //     cout << "Not a Armstrong No." << endl;
    // } 
    int d = no_Of_Digits(n); 
    if(Armstrong(n, d) == n) {
        cout << "Armstrong No.";
    } else {
        cout << "Not a Armstrong No.";
    }

    return 0;
}