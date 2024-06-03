#include <iostream>
using namespace std;

class Subtraction {

private:

    int num1, num2;

public: 

    Subtraction(int a, int b) {
        num1 = a;
        num2 = b;
    }
    Subtraction() {}
    Subtraction operator+(Subtraction const& temp) {
        Subtraction var;
        var.num1 = num1 - num2; 
        var.num2 = temp.num1 - temp.num2;
        return var; 

    }

    void printSubtraction(Subtraction const& temp) {
        cout << temp.num1 << " " << temp.num2;
    }

};

int main() {
    Subtraction s1;

    return 0;
}