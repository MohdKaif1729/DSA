#include<iostream>
#include<vector>
#include<string>

using namespace std;

void multipleOfNo(int n, int k) {
    if(k == 0) return;
    multipleOfNo(n, k - 1);
    cout << (n * k) << endl;
    return;
}

int main() {
    multipleOfNo(4, 4);
    return 0;
}