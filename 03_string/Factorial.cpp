#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial(int num) {

    vector<int> ans(1, 1);

    

    while(num > 1) {
        int index = 0;
        int carry = 0;
        int sum = 0;
        int size = ans.size();
        while(index < size) {
           
            sum = ans[index] * num + carry;
            carry = sum / 10;
            ans[index] = sum % 10;
            index++;
        }
        while(carry) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        num--;
    }

    reverse(ans.begin(), ans.end());

    return ans;

}

int main() {

    int num = 50;

    vector<int> ans = factorial(num);
    
    cout << endl;

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }

    cout << endl << endl;

    

    return 0;
}