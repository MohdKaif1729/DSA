#include <iostream>
#include <vector>
using namespace std;

string sortSentence(string& str) {
    int n = str.size(); 
    vector<string> v(10, "");
    int i = 0;
    int j = 0;
    string temp = "";


    while(i <= n) { 
        if(str[i] == ' ' || i == n) {
            int index = temp[j - 1] - '0';
            temp.pop_back();
            v[index - 1] = temp;
            temp = ""; 
            j = 0;
        }
        else {
            temp += str[i];
            j++;
        }
        
        i++;
    }

    str.clear();
    for(int i = 0; i < 10; i++) {
        if(i != v.size() - 1 && v[i] != "") {
            str += v[i];
            str += " ";
        }
        else {
            str += v[i];
        }
    }


    return str;

}

int main() {
    string str = "Is3 Mohd1 Boy4 Kaif2 And5 Student.6";

    string ans = sortSentence(str);

    cout << ans << endl;

    return 0;
}