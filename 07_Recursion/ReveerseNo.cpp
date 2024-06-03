#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool reverse(int n, int ans, int ori) {
    if(n == 0) {
        if(ans == ori) return true;
        else return false;
    }
    ans = ans * 10 + (n % 10);
    return reverse(n / 10, ans, ori);
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Entered No .: " << n << endl;
    int ori = n;
    bool ans = reverse(n, 0, ori);
    cout << "Reverse No .: " << ans << endl;
    
    return 0;
}