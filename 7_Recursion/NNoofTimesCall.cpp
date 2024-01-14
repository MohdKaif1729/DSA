#include<iostream>
#include<vector>
#include<string>

using namespace std;

void greet(int n) { 
    if(n == 0) return;
    cout << "Good Morning" << endl;
    greet(n - 1);
    return;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    greet(n);
    return 0;
}