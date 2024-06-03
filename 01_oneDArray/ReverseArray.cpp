#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    cout<<"Enter The Elements Of An Array :\n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v1.push_back(k);
    }
    for(int i=0;i<n/2;i++){
        int temp = v1[i];
        v1[i] = v1[n-i-1];
        v1[n-i-1] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}