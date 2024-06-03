#include<iostream>
#include<vector>
#include<string>

using namespace std;

int stairPath(int n) {
    if(n == 1 || n == 2) return n;
    if(n == 3) return 4;
    return stairPath(n - 1) + stairPath(n - 2) + stairPath(n - 3);
}

int main() {
    cout << stairPath(4) << endl; 
    return 0;
}