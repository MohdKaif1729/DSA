#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, temp = 0;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter One Element Unique And All Are Repeated : \n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<v.size();i++){
        bool flag = false;
        for(int j=0;j<v.size();j++){
            if(i==j) continue;
            if(v[i] == v[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}