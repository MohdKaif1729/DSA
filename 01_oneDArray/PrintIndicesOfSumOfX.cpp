#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter No. To Print Their Indices : ";
    cin>>x;
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter Array Elements :\n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j] == x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    return 0;
}