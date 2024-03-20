#include <iostream>
using namespace std;

class Customer
{
private:
  string name;
  int acc_No;
  float balance;

public:
  // Default Constructor: It is a constructor which does not take any parameter.
  // It is used to initialize the object of the class.

  Customer()
  {
    cout << "Default Constructor" << endl;
  }

  // paramerized constructor: It is a constructor which takes parameters.
  // It is used to initialize the object of the class.
  // constructor overloading

  Customer(string name, int acc_No, float balance)
  {
    this->name = name;
    this->acc_No = acc_No;
    this->balance = balance;
    cout << "Customer Created" << endl;
  }

  // inline constructor: It is a constructor which is defined inline.
  // It is used to initialize the object of the class.

  // inline Customer(string name, int acc_No, float balance) : name(name), acc_No(acc_No), balance(balance)
  // {
  //   cout << "Customer Created" << endl;
  // }

  // copy constructor

  Customer(Customer &c)
  {
    name = c.name;
    acc_No = c.acc_No;
    balance = c.balance;
    cout << "Customer Created" << endl;
  }

  // destructor
  // destructor is called in reverse as they initially create
  ~Customer()
  {
    cout << "Destructor is called " << name << endl;
  }

  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Account Number: " << acc_No << endl;
    cout << "Balance: " << balance << endl;
  }
};

int main()
{
  Customer c1("John", 90234568, 5000);
  // c1.display();

  Customer c2("joy", 908679045, 45678);
  c2.display();

  return 0;
}