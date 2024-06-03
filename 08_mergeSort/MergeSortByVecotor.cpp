#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
    int i = 0; // for a
    int j = 0; // for b
    int k = 0; // for res
    while(i < a.size() && j < b.size()) {
        if(a[i] < b[j]) {
            res[k++] = a[i++];
        }
        else {
            res[k++] = b[j++];
        }
    }
    if(i == a.size()) {
        while(j < b.size()) {
            res[k++] = b[j++]; 
        }
    }
    if(j == b.size()) {
        while(i < a.size()) {
            res[k++] = a[i++];
        }
    }
    return;

}

void mergeSort(vector<int>& arr) {
    int n = arr.size();
    if(n == 1) return;
    int n1 = n / 2;
    int n2 = n - (n / 2);
    
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i = 0; i < n1; i++) {
        a[i] = arr[i];
    }
    for(int i = 0; i < n2; i++) {
        b[i] = arr[i + n1];
    }
    mergeSort(a);
    mergeSort(b);

    merge(a, b, arr);
    return;

}

void display(vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}

int main() {
    vector<int> v{5, 2, 3, 6, 8, 1, 0, 9};
    display(v);
    mergeSort(v);
    display(v);

    return 0;
}