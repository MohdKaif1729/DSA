#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    vector<int> v{0,1,2,3,4,5,8,9,12};
    int x = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] != x + 1) {
            cout << "Smallest missing element is " << (x + 1);
            break;
        }
        x = v[i];
    }
    return 0;
}