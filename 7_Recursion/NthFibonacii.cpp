#include<iostream>
#include<vector>
#include<string>

using namespace std;

int NthFibonacii(int n) {
    if(n == 1 || n == 2) return 1;
    return NthFibonacii(n - 2) + NthFibonacii(n - 1);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int ans = NthFibonacii(n); 
    cout << ans << endl;
    return 0;
}