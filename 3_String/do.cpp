#include <bits/stdc++.h>
using namespace std;

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

vector<int> plusOne(vector<int> &digits)
{
    bool flag = false;
    for (int i = 0; i < digits.size(); i++)
    {
        if (digits[i] == 9)
            flag = true;
        else
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
    {
        digits.push_back(0);
        for (int i = 0; i < digits.size(); i++)
        {
            if (i == 0)
                digits[i] = 1;
            else
                digits[i] = 0;
        }
        return digits;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
    {
        digits[i] = digits[i] + 1;
        if (digits[i] == 10)
        {
            digits[i] = 0;
            continue;
        }
        else if (digits[i] != 10)
        {
            break;
        }
    }

    return digits;
}

int maxVowels(string s, int k)
{
    int n = s.length();
    int max_vowels = 0;
    for (int i = 0, j = k - 1; j < n; i++, j++)
    {
        int x = i;
        int y = j;
        int cnt = 0;
        while (x < y)
        {
            if (s[x] == 'a' || s[x] == 'e' || s[x] == 'i' || s[x] == 'o' || s[x] == 'u')
                cnt++;
            if (s[y] == 'a' || s[y] == 'e' || s[y] == 'i' || s[y] == 'o' || s[y] == 'u')
                cnt++;

            x++;
            y--;
        }
        if ((y == x) && (k % 2 != 0) && (s[x + 1] == s[y - 1]))
            cnt++;
        if (max_vowels < cnt)
            max_vowels = cnt;
    }

    return max_vowels;
}

string interpret(string command)
{
    string ans = "";
    for (int i = 0; i < command.size(); i++)
    {
        if (command[i] == 'G')
            ans += command[i];
        else if (command[i] == '(' && command[i + 1] == ')')
        {
            ans += 'o';
            i++;
        }
        else if (command[i] == '(' && command[i + 1] == 'a')
        {
            ans += "al";
            i += 3;
        }
    }

    return ans;
}

int mostWordsFound(vector<string> &sentences)
{
    int max = INT_MIN;
    for (int i = 0; i < sentences.size(); i++)
    {
        stringstream ss(sentences[i]);
        int cnt = 0;
        string temp = "";
        while (ss >> temp)
        {
            cnt++;
        }
        if (max < cnt)
            max = cnt;
    }
    return max;
}

int strStr(string haystack, string needle)
{
    int idx = -1;
    int n = haystack.size();
    int m = needle.size();
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        int j = 0;
        int k = i;
        if (haystack[k] == needle[j])
        {
            idx = i;
            j++;
            k++;
        }
        else
            continue;
        while (j < m)
        {
            if (haystack[k] != needle[j])
            {
                flag = false;
                break;
            }
            j++;
            k++;
        }
        if (flag == true)
            break;
        else
            idx = -1;
    }

    return idx;
}

vector<int> addToArrayForm(vector<int> &num, int k)
{
    vector<int> ans;
    int sum = 0;
    int carry = 0;
    int cnt = 0;
    int temp = k;
    for (int i = 0; temp != 0; i++)
    {
        cnt++;
        temp /= 10;
    }
    int x = num.size();
    int n = max(x, cnt);
    for (int i = n - 1; i >= 0; i--)
    {
        int N = num[i] + (k % 10) + carry;
        sum = N % 10;
        carry = N / 10;
        ans.push_back(sum);

        k /= 10;
    }
    if (carry > 0)
        ans.push_back(carry);
    reverse(ans.begin(), ans.end());

    return ans;
}

string addStringsGPT(string num1, string num2)
{
    int carry = 0;
    int sum = 0;
    int n1_size = num1.size();
    int n2_size = num2.size();
    string ans = "";

    for (int i = n1_size - 1, j = n2_size - 1; i >= 0 || j >= 0; i--, j--)
    {
        int n1 = (i >= 0) ? num1[i] - '0' : 0;
        int n2 = (j >= 0) ? num2[j] - '0' : 0;

        int n3 = n1 + n2 + carry;
        sum = n3 % 10;
        carry = n3 / 10;

        ans += to_string(sum);
    }

    if (carry > 0)
        ans += to_string(carry);

    reverse(ans.begin(), ans.end());
    return ans;
}

string addStringsMera(string num1, string num2)
{
    int carry = 0;
    int sum;
    int n1_size = num1.size();
    int n2_size = num2.size();

    string ans = "";
    for (int i = n1_size - 1, j = n2_size - 1; i >= 0 || j >= 0; i--, j--)
    {
        int n1 = (int)num1[i] - 48;
        int n2 = (int)num2[j] - 48;
        if (i >= 0 && j >= 0)
        {
            int n3 = n1 + n2 + carry;
            sum = n3 % 10;
            carry = n3 / 10;
        }
        if (j < 0)
        {
            int n3 = n1 + carry;
            sum = n3 % 10;
            carry = n3 / 10;
        }
        if (i < 0)
        {
            int n3 = n2 + carry;
            sum = n3 % 10;
            carry = n3 / 10;
        }
        char ch = (char)(sum + 48);
        ans += ch;
    }
    if (carry > 0)
        ans += (char)(carry + 48);
    reverse(ans.begin(), ans.end());

    return ans;
}

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int cnt = 1;
    int ans = 0;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        if (cnt > n / 2)
        {
            ans = nums[i];
            break;
        }
    }

    return ans;
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    // sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> v(3);
    // vector<vector<int>> arr(1, vector<int>(3, 0));
    // bool flag = true;
    // for (int i = 0; i < n; i++)
    // {
    //     if (nums[i] != 0)
    //         flag = false;
    // }

    // if (flag == true)
    //     return arr;

    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; i++)
    {
        int temp = -(nums[i]);
        for (int j = i + 1, k = i + 2; (j < n - 1) && (k < n); j++, k++)
        {
            if (nums[j] + nums[k] == temp)
            {
                v[0] = nums[i];
                v[1] = nums[j];
                v[2] = nums[k];
                ans.push_back(v);
            }
        }
    }

    return ans;
}

int findContentChildren(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int ans = 0;

    for (int i = 0, j = 0; i < s.size() && j < g.size(); i++)
    {
        if (s[i] >= g[j])
        {
            j++;
            ans++;
        }
    }

    return ans;
}

void subset(string &str, string ans, int i, vector<string> &finalAns)
{
    if (i == str.size())
    {
        if (ans.size() == 2)
        {
            finalAns.push_back(ans);
        }
        return;
    }
    subset(str, ans + str[i], i + 1, finalAns);
    subset(str, ans, i + 1, finalAns);
    return;
}

void subsetOfTwo(string &str, string &ans, vector<string> &finalAns)
{
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            string temp = "";
            temp = temp + str[i] + ans[j];
            finalAns.push_back(temp);
        }
    }
    return;
}

void reverseWord(string &s)
{

    int i = 0;
    int start = 0;
    int end;
    int n = s.size();

    while (i <= n)
    {

        if (s[i] == ' ' || i == n)
        {
            end = i - 1;

            while (start < end)
            {
                swap(s[start++], s[end--]);
            }

            start = i + 1;
        }
        i++;
    }

    return;
}

string removeSubString(string str, string part)
{
    
    // bool check = true;

    // while (check)
    // {
    //     int n = str.size();
    //     bool flag = false;
        for (int i = 0; i < str.size(); i++)
        {
            string temp = str.substr(i, part.size());
            cout << temp << endl;
            if(temp == part) {
                str.erase(i, part.size());
                // flag = true;
                i = -1;
            }
        }
    //     if (flag == false)
    //     {
    //         check = false;
    //     }
        
    // }

    return str;
}

int main()
{

    string s = "eemckxmckx";

    string part = "emckx";

    // cout << s << endl;

    // s = removeSubString(s, part);

    for(int i = 0; i < 127; i++) {
        cout << i << " --> " << (char)(i) << endl;
    }


    cout << s << endl;

    return 0;
}