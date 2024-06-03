#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter The Element Of Array : \n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
        if(v[i]%2 == 0) v[i] = v[i] + 10;
        else v[i] = 2*v[i];
    }
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    return 0;
}