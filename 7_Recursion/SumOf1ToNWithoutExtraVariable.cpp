#include<iostream>
#include<vector>
#include<string>

using namespace std;

int sumOf1ToN_No(int n) {
    if(n == 0) return 0;
    return n + sumOf1ToN_No(n - 1);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = sumOf1ToN_No(n);
    cout << "Sum is : " << sum << endl;
    return 0;
}