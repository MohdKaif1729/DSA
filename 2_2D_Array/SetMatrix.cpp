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

int main()
{
    
    vector< vector <int> > v {
        {0,1,2,0},
        {3,4,5,2},
        {1,3,1,5}
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