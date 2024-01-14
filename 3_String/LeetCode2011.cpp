#include <iostream>
#include <string>
#include<vector>

using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int ans = 0;
    for (int i = 0; i < operations.size(); i++)
    {
        string temp = operations[i];
        if (temp[1] == '+')
            ans++;
        else
            ans--;
    }

    return ans;
}

int main()
{
    system("cls");
    vector<string> str{"++X","++X","X++"};
    int ans = finalValueAfterOperations(str);
    cout << ans << endl;
    return 0;
}