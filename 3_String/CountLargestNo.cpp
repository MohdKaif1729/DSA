#include<iostream>
#include<string>
#include<vector>
#include<climits>

using namespace std;

int main() {
    system("cls");
    vector<string> numbers{"0123", "0023", "456", "00182", "940", "002901"};
    int max = INT_MIN;
    int idx = -1;
    for(int i = 0; i  < numbers.size(); i++) {
        int temp = stoi(numbers[i]);
        if(max < temp) {
            max = temp;
            idx = i;
        }
    }

    cout << numbers[idx];
    
    return 0;
}