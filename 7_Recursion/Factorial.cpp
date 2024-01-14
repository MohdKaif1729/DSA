#include<iostream>
#include<vector>
#include<string>

using namespace std;

int factorialOfN(int n) {
    if(n == 0) return 1;
    return n * factorialOfN(n - 1);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int ansOfFactorial = factorialOfN(n);
    cout << ansOfFactorial;
    return 0;
}