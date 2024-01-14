#include<iostream>
#include<vector>
#include<string>

using namespace std;

long long powerFun(long long a, long long b) {
    if(b == 1) return a;
    int ans = powerFun(a, b / 2);
    if(b % 2 == 0) {
        return  ans * ans;
    }
    else {
        return a * ans * ans;
    }
}

int main() {
    int a;
    cout << "Enter base : ";
    cin >> a;
    int b;
    cout << "Enter exponent : ";
    cin >> b;
    long long ans = powerFun(a, b);
    cout << ans << endl;
    return 0;
}