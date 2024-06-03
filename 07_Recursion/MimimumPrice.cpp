#include<iostream>
#include<vector>
#include<string>

using namespace std;

int minCost(int *h, int n, int i) {
    if(i == n - 1) return 0;
    if(i == n - 2) return abs(h[i] - h[i + 1]);
    int x = minCost(h, n, i + 1) + abs(h[i] - h[i + 1]);
    int y = minCost(h, n, i + 2) + abs(h[i] - h[i + 2]);
    return min(x, y);
}

int main() {
    int price[] = {10,30,40,20};
    int n = sizeof(price) / sizeof(price[0]);
    int ans = minCost(price, n, 0);
    cout << ans << endl;
    return 0;
}