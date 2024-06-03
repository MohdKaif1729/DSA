#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

void display(vector<int>& matrix){
    int size = matrix.size();
    for(int i = 0; i < size; i++){
        cout << matrix[i] << " ";
    }
    cout<<endl;
    return;
}

int second_Largest_Element(vector<int>& v){
    int size = v.size();
    int max = INT_MIN, smax;
    for(int i = 0; i < size; i++){
        if(v.at(i) > max){
            smax = max;
            max = v.at(i);
        }
    }
    return smax;
}

bool duplicate(vector<int>& v){
    int size = v.size();
    int cnt = 1;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(v.at(i) == v.at(j)) cnt++;
        }
    }
    if(cnt >= 2) return true;
    else return false;
}

void three_Largest_Elements(int *first, int *sec, int *third, vector<int> v){
    int fmax = INT_MIN, smax = 0, tmax;
    int size = v.size();
    for(int i = 0; i < size; i++){
        if(v[i] > fmax){
            tmax = smax;
            smax = fmax;
            fmax = v[i];
        }
    }
    *first = fmax;
    *sec = smax;
    *third = tmax;
    return;
}

bool check_Array_Sorted(vector<int>& v){
    int size = v.size();
    bool flag = true;
    for(int i = 0; i < size; i++){
        if(v[i + 1] > v[i]){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}

void change_Indices_Value(vector<int>& v){
    int size = v.size();
    for(int i = 0; i < size; i++){
        if(i%2 == 0){
            v[i] += 10;
        }
        else{
            v[i] *= 2;
        }
    }
    return;
}

int first_Non_Repeating_Element(vector<int>& v){
    int size = v.size();
    int ans = 0;
    for(int i = 0; i < size - 1; i++){
        int cnt = 1;
        int j = i + 1;
        while(j < size){
            if(v[i] == v[j]){
                cnt++;
                v[j] = INT_MIN;
                break;
            }
            j++;
        }
        if((cnt == 1) && (v[i] != INT_MIN)){
            ans = v[i];
            break;
        } 
    }
    return ans;
}

bool check_Palindrome_OrNot(vector<int>& v){
    int size = v.size();
    int i = 0, j = size - 1;
    bool flag;
    while(j >= 0){
        if(v[i] == v[j]){
            flag = true;
        }
        else{
            flag = false;
            break;
        }
        j--;
        i++;
    }
    return flag;
}

bool check_Subset_OrNot(vector<int>& v1, vector<int>& v2){
    int size1 = v1.size(), size2 = v2.size();
    int i, j;
    if(size1 > size2){
        i = size1 - 1;
        j = size2 - 1;
    }
    else{
        j = size1 - 1;
        i = size2 - 1;
    }
    
    bool flag;
    while(i >= 0){
        if(v1[i] == v2[j]) j--;
        i--;
    }

    if(j < 0) flag = true;
    else flag = false;

    return flag;
}

int unique_Element(vector<int>& v){
    int size = v.size();
    int ans = 0;
    for(int i = 0; i < size - 1; i++){
        int cnt = 1;
        int j = i + 1;
        while(j < size){
            if(v[i] == v[j]){
                cnt++;
                v[j] = INT_MIN;
            }
            j++;
        }
         
        if((cnt == 1) && (v[i] == INT_MIN) && (i == size - 2)){
            ans = v[i + 1];
            break;
        } 
        else if((cnt == 1) && (v[i] != INT_MIN)){
            ans = v[i];
            break;
        } 
    }
    return ans;
}

int count_Sum_Of_Triplet(vector<int> v, int target){
    int size = v.size();
    int cnt = 0;
    for(int i = 0; i < size - 2; i++){
        for(int j = i + 1; j < size - 1; j++){
            for(int k = j + 1; k < size; k++){
                if(v[i] + v[j] + v[k] == target){
                    cnt++;
                }
            }   
        }
    }
    return cnt;
}

void move_All_ZeroesTo_End(vector<int>& v){
    int size = v.size();
    int i = 0, j = size - 1;
    while( i < j){
        if(v[i] > 0) i++;
        else if(v[j] == 0) j--;
        else if((v[i] == 0) && (v[j] > 0)){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
}

int max_Sum_Row(vector<vector<int>>& v){
    int row = v.size();
    int col = v[0].size();
    int max = INT_MIN;
    int k;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += v[i][j];
        }
        if(sum > max){
            k = i;
            max = sum;
        }
    }
    return k;
}

void show_Middle_Of_RowsAndColumns(vector<vector<int>>& v){
    int row = v.size();
    int col = v[0].size();
    int rk = row / 2;
    int ck = col / 2;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == rk){
                cout << v[i][j] << " ";
            }
            else if(j == ck){
                cout << v[i][j] << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return;
}

int largest_In_2DArray(vector<vector<int>>& v){
    int row = v.size();
    int col = v[0].size();
    int max = INT_MIN;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(v[i][j] > max) max = v[i][j];
        }
    }
    return max;
}

int sum_Of_Coordinate_Matrix(vector<vector<int>>& v){
    int row = v.size();
    int col = v[0].size();
    int sum = 0;
    int r1 = 0, r2 = 2, c1 = 1, c2 = 1;
    sum = v[r1][c1] + v[r2][c2];
    v[r1][c1] = INT_MIN;
    v[r2][c2] = INT_MAX;
    bool flag = false;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(v[i][j] == INT_MAX) flag = false;
            else if(v[i][j] == INT_MIN) flag = true;
            else if(flag == true) sum += v[i][j];
            
        }
    }
    return sum;
}

void diagonal_Element_Printing(vector<vector<int>>& v){
    int size = v.size();
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if((i == j) || (i + j == size - 1)){
                cout << v[i][j] << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return;
}

void rotate_Anti_ClockWise(vector<vector<int>>& v){
    int row = v.size();
    int col = v[0].size();
    for(int i = 0; i < row; i++){
        for(int j = i + 1; j < col; j++){
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < row / 2; j++){
            int temp = v[j][i];
            v[j][i] = v[row - 1 - j][i];
            v[row - 1 - j][i] = temp;
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << v[i][j] << " "; 
        }
        cout << endl;
    }
    cout << endl;
    return;
}

vector<vector<int>> pascal_Triangle(int n){
    vector<vector<int>> v;
    for(int i = 0; i < n; i++){
        vector<int> vec(i+1);
        int iCj = 1;
        for(int j = 0; j <= i; j++){
            vec[j] = iCj; 
            iCj = iCj * (i - j) / (j + 1);
        }
        v.push_back(vec);
    }
    return v;
}

void spiralPrinting(int arr[][4], int rows, int cols) {

    // spiral printing 
    int minRows = 0;
    int maxRows = rows - 1;
    int minCols = 0;
    int maxCols = cols - 1;
    int noOfElementPrint = 0;
    int totalElement = rows * cols;

    while(noOfElementPrint < totalElement) {
        // min rows
        for(int i = minCols; i <= maxCols; i++) {
            if(noOfElementPrint >= totalElement) {
                break;
            }
            cout << arr[minRows][i] << " ";
            noOfElementPrint++;
            
        }
        minRows++;

        // max cols
        for(int i = minRows; i <= maxRows; i++) {
            if(noOfElementPrint >= totalElement) {
                break;
            }
            cout << arr[i][maxCols] << " ";
            noOfElementPrint++;
            
        }
        maxCols--;

        // max rows
        for(int i = maxCols; i >= minCols; i--) {
            if(noOfElementPrint >= totalElement) {
                break;
            }
            cout << arr[maxRows][i] << " ";
            noOfElementPrint++;
            
        }
        maxRows--;

        // min cols
        for(int i = maxRows; i >= minRows; i--) {
            if(noOfElementPrint >= totalElement) {
                break;
            }
            cout << arr[i][minCols] << " ";
            noOfElementPrint++;
            
        }
        minCols++;
    }

    return;

}

void tranpose(int (*arr)[4], int rows, int cols) {

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i < j) {
                swap(arr[i][j], arr[j][i]);
            }
        }

    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    return;

}


vector<vector<int>> rotateMatrix(int N, int M, int K, vector<vector<int>> Mat) {
    // code here
    
    K = K % M;
    
    vector<vector<int>> v(M, vector<int>(N));
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            v[j][i] = Mat[i][j];
        }
    }

    for(int i = 1; i <= K; i++) {
        for(int row = 1; row < M; row++) {
        
            swap(v[row - 1], v[row]);
            
        }
    }
    
    N = v.size();
    M = v[0].size();
    
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            Mat[j][i] = v[i][j];
        }
    }
    
    
    return Mat;
    
    
}

int main(){ 
    
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6}
    };

    int N = arr.size();
    int M = arr[0].size();
    int K = 1;

    vector<vector<int>> ans = rotateMatrix(N, M, K, arr);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}