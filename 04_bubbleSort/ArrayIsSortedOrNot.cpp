#include<iostream>
#include<vector>

using namespace std;

int main() {
    system("cls");

    vector<int> v{1, 2, 3, 4, 5};

    int n = v.size();
    bool flag = true;
    for(int i = 1; i < n; i++) {
        if(v[i - 1] > v[i]) {
            flag = false; 
            break;
        }
    }

    if(flag == true) cout << "Sorted Array";
    else cout << "Unsorted Array";

    return 0;
}