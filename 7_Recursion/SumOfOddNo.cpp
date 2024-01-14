#include<iostream>
#include<vector>
#include<string>

using namespace std;

int sumOf_Odd(int a, int b) {
    if(a > b) return 0;
    return a + sumOf_Odd(a + 2, b);
}

int main() {
    cout << sumOf_Odd(1, 9) << endl;
    return 0;
}