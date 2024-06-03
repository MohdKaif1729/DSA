#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cout << "Enter a number : \n";
    cin >> n;
    
    string str = to_string(n);

    int digits = str.length();

    cout << "No. Of Digits In A Number is : " << digits << endl;
    return 0;
}