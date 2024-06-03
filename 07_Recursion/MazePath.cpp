#include<iostream>
#include<vector>
#include<string>

using namespace std;

// int maze(int rows, int cols) { 
//     if(rows == 1 && cols != 1) return 1; 
//     if(rows != 1 && cols == 1) return 1;
//     return maze(rows - 1, cols) + maze(rows, cols - 1);
// }

void printways(int sr, int sc, int er, int ec, string s) { 
    if(sr > er || sc > ec) return;
    if(sr == ec && sc == ec) {
        cout << s << endl;
        return;
    }
    printways(sr + 1, sc, er, ec, s + 'R');
    printways(sr, sc + 1, er, ec, s + 'D');
}

int main() {
    // int rows;
    // cout << "Enter rows .: ";
    // cin >> rows;
    // int cols;
    // cout << "Enter cols .: ";
    // cin >> cols;
    // int ans = maze(rows, cols);
    // cout << ans << endl; 
    printways(1,1,2,2,"");
    return 0;
}