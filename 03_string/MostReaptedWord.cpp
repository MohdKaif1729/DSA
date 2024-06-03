#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main() {
    system("cls");
    string str;
    cout << "Enter a string : \n";
    getline(cin, str);
    stringstream stream(str);
    string temp;
    vector<string> ans;
    while (stream >> temp){
        ans.push_back(temp);
    }

    vector<int> arr(ans.size(), 0);

    sort(ans.begin(), ans.end());
    cout << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    int cnt = 1;
    int max = INT_MIN;
    string temp1;
    for(int i = 1; i < ans.size(); i++) {
        
        if(ans[i - 1] == ans[i]) {
            cnt++;
        } 
        else if( max < cnt) {
            max = cnt;
            cnt = 1;
            temp1 = ans[i - 1];
        }
        
    }
    cout << endl;
    cout << temp1 << " is repeated in above string!";

    return 0;
}