#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> a){
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

vector<int> merge(vector<int>& v1, vector<int>& v2){
    int m = v1.size();
    int n = v2.size();
    vector<int> res(m + n);
    int i = 0, j = 0, k = 0;
    while(k < (m + n)){
        if(v1[i] < v2[j]){
            res[k] = v1[i];
            i++;
        }
        else if(i >= m){
            res[k] = v2[j];
        }
        else if(j >= n){
            res[k] = v1[i];
        }
        else{
            res[k] = v2[j];
            j++;
        }
        k++;
    }
    return res;
}

int main(){
    vector<int> arr1{1,4,5,8};
    vector<int> arr2{2,3,6,7,10};
    display(arr1);
    display(arr2);
    
    vector<int> arr3 = merge(arr1, arr2);

    display(arr3);


    return 0;
}