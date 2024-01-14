#include<iostream>
#include<vector>
#include<string>

using namespace std;

int sumOfSeries(int n) {
    // base case
    if(n == 0) return 0;
    // assumption and self work
    return sumOfSeries(n - 1) + ((n % 2 == 0) ? -n : n);
}

int main() {
    cout << sumOfSeries(5);
    return 0;
}