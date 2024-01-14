#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    cout<<"Enter The Elements Of An Array :\n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v1.push_back(k);
    }
    for(int i=v1.size()-1;i>=0;i--){
        v2.push_back(v1[i]);
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
        cout<<v2[i]<<"\n";
    }
    // cout<<endl;
    // for(int i=0;i<v2.size();i++){
    //     cout<<v2[i]<<" ";
    // }
    return 0;
}