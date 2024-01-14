#include<iostream>
#include<vector>
#include<string>

using namespace std;

class bank{
private :
    int bal;
    int dep;
    int wit;
public :
    void curr_bal(int baln) {
        cout << "Your curr bal is : \n";
        cout << "Rs";
        cout << baln << endl;
        bal = baln;
    }
    void deposit(void) {
        cout << "Enter deposite amt : \n";
        cin >> dep;
        bal = bal + dep;
        curr_bal(bal);
    }
    void withdrawl(void) {
        cout << "Enter withdrawl amt : \n";
        cin >> wit;
        bal = bal - wit;
        if(bal < 0) {
            cout << "You can withdraw only : \n" << "Rs" << wit + bal << endl;
            curr_bal(wit + bal);
        } else {
            curr_bal(bal);
        } 
    }
};

int main() {
    bank acc_info;
    acc_info.curr_bal(0);
    acc_info.deposit();
    acc_info.withdrawl();
    return 0;
}