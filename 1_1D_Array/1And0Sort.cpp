#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    vector<int> v;
    bool flag = false;
    cout<<"Enter The Element Of Array : \n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}