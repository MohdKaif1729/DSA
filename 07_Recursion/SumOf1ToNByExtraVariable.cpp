#include<iostream>
#include<vector>
#include<string>

using namespace std;

int sumOf1ToN_No(int i, int n) {
    if(i == n) return n;
    return i + sumOf1ToN_No(i + 1, n);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = sumOf1ToN_No(1,n);
    cout << "Sum is : " << sum << endl;
    return 0;
}