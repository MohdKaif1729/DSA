#include<iostream>
#include<vector>
#include<string>

using namespace std;

int aPowbFun(int a, int b) {
    if(b == 0) return 1;
    return a * aPowbFun(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter the base : ";
    cin >> a;
    cout << "Enter the power : ";
    cin >> b;
    int ans = aPowbFun(a, b);
    cout << ans << endl;
    return 0;
}