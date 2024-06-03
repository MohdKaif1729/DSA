#include <iostream>
#include <vector>
using namespace std;

void display(vector< vector<int> >& Mat, int N, int M) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << Mat[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    return;

}

vector< vector<int> > transpose(int N, int M, vector<vector<int>>& Mat) {
    
    vector< vector<int> > ans(M, vector<int>(N));
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            ans[j][i] = Mat[i][j];
            
        }
    }

    return ans;
}

vector< vector<int> > rotateLeft(vector< vector<int> >& Mat, int N, int M, int K) {
    vector< vector<int> > ans1 = transpose(N, M, Mat);
    N = ans1.size();
    M = ans1[0].size();
    for(int i = 1; i <= K; i++) {
        for(int row = 1; row < N; row++) {
            swap(Mat[row - 1], Mat[row]);
        }
    }
    vector< vector<int> > ans2 = transpose(N, M, Mat);
    return ans2;

    // for(int i = 1; i <= K; i++) {
    //     for(int row = 0; row < N; row++) {
    //         for(int col = 1; col < M; col++) {
    //             swap(Mat[row][col - 1], Mat[row][col]);
    //         }
    //     }
    // }

    // for(int i = 1; i <= K; i++) {
    //     for(int row = 0; row < N; row++) {
    //         int temp = Mat[row][0];
    //         for(int col = 1; col < M; col++) {
    //             Mat[row][col - 1] = Mat[row][col];
    //         }
    //         Mat[row][M - 1] = temp;
    //     }
    // }

    // for(int i = 0; i < M - 1; i++) {
    //     for(int j = i + 1; j < N; j++) {
    //         swap(Mat[i][j], Mat[j][i]);
    //     }
    // }
}

int main() {
    vector< vector<int> > Mat{
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int N = Mat.size();
    int M = Mat[0].size();
    int K = 1;

    K = K % M;

    display(Mat, N, M);

    // vector< vector<int> > ans = transpose(N, M, Mat);
    vector< vector<int> > ans = rotateLeft(Mat, N, M, K);
    N = ans.size();
    M = ans[0].size();
    
    display(ans, N, M);

    return 0;
}