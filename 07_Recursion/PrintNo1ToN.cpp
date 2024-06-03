#include<iostream>
#include<vector>
#include<string>

using namespace std;

void print_1_To_N_Nos(int n) {
    if(n == 0) return;
    print_1_To_N_Nos(n - 1);
    cout << n << endl;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    print_1_To_N_Nos(n);
    return 0;
}