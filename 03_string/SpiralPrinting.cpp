#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& matrix){
    int size = matrix.size();
    for(int i = 0; i < size; i++){
        cout << matrix[i] << " ";
    }
    cout<<endl;
    return;
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int size = row * col;
    int minr = 0, maxr = row - 1, minc = 0, maxc = col - 1;
    int a = 0;
    vector<int> v(size);
    while(a < size){
        int i = minc;
        while(i <= maxc){
            if(a == size) break;
            v[a] = matrix[minr][i];
            i++;
            a++;
        }
        minr++;
        int j = minr;
        while(j <= maxr){
            if(a == size) break;
            v[a] = matrix[j][maxc];
            j++;
            a++;
        }
        maxc--;
        int k = maxc;
        while(k >= minc){
            if(a == size) break;
            v[a] = matrix[maxr][k];
            k--;
            a++;
        }
        maxr--;
        int x = maxr;
        while(x >= minr){
            if(a == size) break;
            v[a] = matrix[x][minc];
            x--;
            a++;
        }
        minc++;
    }
    return v;
}

int main(){ 
    vector<vector<int>> vec{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<int> ans = spiralOrder(vec);

    display(ans);

    return 0;
}