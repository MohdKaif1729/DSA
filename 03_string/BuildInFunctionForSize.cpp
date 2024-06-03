#include<iostream>
#include<string>

using namespace std;

int main() {
    string str = "cpp is OOPS";
    // Build in function in c++
    // size() function
    int size = str.size();

    //length() function
    int si = str.length();

    // By manually
    int cnt = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        cnt++;
    }
    cout << "Size By size Function : " << size << endl;
    cout << "Size By length Function : " << si << endl;
    cout << "Size By Manually : " << cnt << endl;
    return 0;
}