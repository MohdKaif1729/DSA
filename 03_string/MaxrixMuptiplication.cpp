#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cout<<"Enter rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter columns of 1st matrix : ";
    cin>>n;

    int p;
    cout<<"Enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter columns of 2nd matrix : ";
    cin>>q;

    if(n == p){
        int matrix1[m][n];
        cout<<"Enter the elements of 1st "<<m<<"X"<<n<<" matrix:\n";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin>>matrix1[i][j];
            }
        }
        cout<<endl;

        int matrix2[p][q];
        cout<<"Enter the elements of 2nd "<<p<<"X"<<q<<" matrix:\n";
        for(int i = 0; i < p; i++){
            for(int j = 0; j < q; j++){
                cin>>matrix2[i][j];
            }
        }
        cout<<endl;

        int matrix[m][q];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
                int sum = 0;
                for(int k = 0; k < n; k++){
                    sum += (matrix1[i][k] * matrix2[k][j]);
                }
                matrix[i][j] = sum;
            }
        }

        cout<<"Multiplication of two matrix is:\n";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < q; j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    } 
    else{
        cout<<"Matrix can not be multiplied";
    }

    return 0;
}