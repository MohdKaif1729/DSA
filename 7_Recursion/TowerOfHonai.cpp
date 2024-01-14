#include<iostream>
#include<vector>
#include<string>

using namespace std;

void towerOf_Hanoi(int n, char s, char h, char d) {
    if(n == 0) return;
    towerOf_Hanoi(n - 1, s, d, h);
    cout << s << " --> " << d << endl;
    towerOf_Hanoi(n - 1, h, s, d);
    return;

}

int main() {
    towerOf_Hanoi(3, 'A', 'B', 'C');
    return 0;
}