#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool powerOf2(int n) {
    if(n == 2 || n == 1) return true;
    if(n % 2 == 1) return false;
    return powerOf2(n / 2);
} 

int main() {
    cout << powerOf2(1) << endl;
    return 0;
}