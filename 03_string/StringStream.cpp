#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
    system("cls");
    string str = "mohd kaif is   a    coding learner";
    stringstream ss(str);
    string temp;

    while(ss>>temp) {
        cout << temp << endl;
    }
    
    return 0;
}