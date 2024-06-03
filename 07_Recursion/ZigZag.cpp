#include<iostream>
#include<vector>
#include<string>

using namespace std;

void zig_Zag(int n) {
    if(n == 0) return;
    cout << n;
    zig_Zag(n - 1);
    cout << n;
    zig_Zag(n - 1);
    cout << n;
    return;
}

int main() {
    zig_Zag(4);
    return 0;
}