#include <iostream>
#include <string>
#include <vector>

using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    int ans = 0;
    vector<int> v(52, 0);
    string str = max(jewels, stones);
    int n = str.size();
    // max
    for (int i = 0; i < n; i++)
    {
        int idx = (int)str[i];
        if (idx >= 65 && idx <= 90)
        {
            int k = idx - 65;
            v[k]++;
        }
        else
        {
            int k = idx - 71;
            v[k]++;
        }
    }

    string s = min(jewels, stones);
    int m = s.size();
    // min
    for (int j = 0; j < m; j++)
    {
        int idx = (int)s[j];
        for (int i = 0; i < 52; i++)
        {
            if (idx >= 65 && idx <= 90)
            {
                int k = idx - 65;
                if (k == i)
                    ans += v[i];
            }
            else if (idx >= 97 && idx <= 122)
            {
                int k = idx - 71;
                if (k == i)
                    ans += v[i];
            }
        }
    }

    return ans;
}

int main()
{
    system("cls");
    string str1 = "aA";
    string str2 = "aAAbbbb";
    int ans = numJewelsInStones(str1, str2);
    cout << ans << endl;
    return 0;
}