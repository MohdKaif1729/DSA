#include <iostream>
#include <vector>
using namespace std;

int romanToInt(string str) {
    vector<int> v(26, 0);
    int n = str.size();
    v['I' - 'A'] = 1;
    v['V' - 'A'] = 5;
    v['X' - 'A'] = 10;
    v['L' - 'A'] = 50;
    v['C' - 'A'] = 100;
    v['D' - 'A'] = 500;
    v['M' - 'A'] = 1000;
    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        if(v[str[i] - 'A'] >= v[str[i + 1] - 'A']) {
            ans += v[str[i] - 'A'];
        }
        else {
            ans += (-v[str[i] - 'A']);
        }
    }
    ans += v[str[n - 1] - 'A'];
    return ans;
}

int main() { 
    cout << endl << "Roman To Int: " <<romanToInt("CCCXXXV"); 
    return 0;
}