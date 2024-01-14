#include<iostream>
#include<vector>
#include<string>

using namespace std;

void print_N_To_1_Nos(int n) {
    if(n == 0) return;
    cout << n << endl;
    print_N_To_1_Nos(n - 1);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    print_N_To_1_Nos(n);
    return 0;
}