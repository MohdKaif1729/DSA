#include<iostream>
#include<vector>
#include<string>

using namespace std;
/*
                ____ Destination
            ____|4
        ____|3
    ____|2
____|1
*/
int stair(int n) {
    if(n == 1 || n == 2) return n;
    return stair(n - 1) + stair(n - 2);
}

int main() {
    int n;
    cout << "Enter a No .: ";
    cin >> n;
    int ans = stair(n);
    cout << ans << endl; 
    return 0;
}