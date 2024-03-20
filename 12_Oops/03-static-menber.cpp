#include <iostream>
using namespace std;

class Customer
{
  static int total_Customer;
  string name;
  int acc_No, bal;
  static int total_bal;

public:
  Customer(string name, int acc_No, int bal)
  {
    this->name = name;
    this->acc_No = acc_No;
    this->bal = bal;
    total_Customer += 1;
    total_bal += bal;
  }

  static void accessStatic()
  {
    cout << "total customer: " << total_Customer << endl;
    cout << "total customer bal: " << total_bal << endl;
  }

  void display()
  {
    cout << name << " " << acc_No << " " << bal << " " << total_Customer << endl;
  }
};

int Customer::total_Customer = 0;
int Customer::total_bal = 0;

int main()
{
  Customer C1("kaif", 345678, 1000);
  Customer C2("distant", 345634, 1000);
  C1.display();
  C2.display();
  Customer::accessStatic();
  return 0;
}