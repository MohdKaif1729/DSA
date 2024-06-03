#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void display(vector<vector<int>> &v)
{
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return;
}

int transpose(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int ans = 0;
    for (int i = 0; i < row; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == 1)
                    matrix[i][j] = 0;
                else
                    matrix[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < col; i++)
    {
        if (matrix[row - 1][i] == 0)
        {
            for (int j = row - 1; j >= 0; j--)
            {
                if (matrix[j][i] == 1)
                    matrix[j][i] = 0;
                else
                    matrix[j][i] = 1;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        int x, sum = 0;
        for (int j = col - 1; j >= 0; j--)
        {
            if (j == col - 1)
                x = 1;
            else
                x *= 2;
            if (matrix[i][j] == 1)
                sum += x;
        }
        ans += sum;
    }
    return ans;
}

int removeDuplicate(vector<int> &v)
{
    int ans = 0;
    // int size = v.size();
    int k = 0;
    for (int i = 0; i < v.size(); i = k)
    {
        k = i;
        while ((v[i] == v[k]) && (k < v.size()))
        {
            v[ans] = v[k];
            k++;
        }
        ans++;
    }

    // for(int i = 0; i < size - ans; i++){
    //     v.pop_back();
    // }
    return ans;
}

vector<int> sortedSquares(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        nums[i] = nums[i] * nums[i];
    }

    return nums;
}

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> answer(nums.size());
    int product = 1;
    int cnt = 0;
    int idx;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] == 0)
        {
            cnt++;
        }
    }
    if (cnt == 1)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                product *= nums[j];
                idx = j;
            }
            else
            {
                answer[j] = 0;
            }
        }
        answer[idx] = product;
    }
    else if (cnt >= 2)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            answer[i] = 0;
        }
    }
    else
    {
        for (int j = 0; j < nums.size(); j++)
        {
            product *= nums[j];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            answer[i] = product / nums[i];
        }
    }
    return answer;
}

int main()
{
    vector< vector <int> > v {
        {1,1,1},
        {1,0,1}
    };
    int m = v.size();
    int n = v[0].size();
    vector< vector <int> > ans(m, vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            ans[i][j] = v[i][j];
        }
    }
    display(v);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(v[i][j] == 0) {
                // For Row
                for(int k = 0; k < n; k++) {
                    ans[i][k] = 0;
                }
                // For Column
                for(int k = 0; k < m; k++) {
                    ans[k][j] = 0;
                }
            }
        }
    }
    display(ans);
    return 0;
}