#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<climits>

using namespace std;

// baakar method this is
// bool judgeSquare(int c) {
//     int x = 0;
//     int y = c;
//     bool ans = false;
//     while(x <= y) {
//         int a = sqrt(x);
//         int b = sqrt(y);
//         if(a * a == x && b * b == y) {
//             if(a * a + b * b == c) {
//                 return true;
//                 break;
//             }
//         }
//         x++;
//         y--;
//     }
//     return false;
// }

bool judgeSquare(int c) {
    int x = 0;
    int y = c;
    int a = x;
    int b = sqrt(y);
    bool ans = false;
    while(x <= y) {
        if(a * a == x && b * b == y) {
            if(a * a + b * b == c) {
                return true;
                break;
            }
        }
        else if(b * b != y){
            y = b * b;
        }
        if(a * a + b * b > c) {
            b--;
            y = b * b;
        }
        else if(a * a + b * b < c) {
            a++;
            x = a * a;
        }
    }
    return false;
}

int main() {
    int x = 2147482647;
    bool ans = judgeSquare(x);
    cout << ans << endl;    
    return 0;
}