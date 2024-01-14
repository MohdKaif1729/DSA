#include<iostream>
#include<vector>
#include<bits/stdc++.h> // Baap File
using namespace std;
int main(){
    vector<int> v;// You Need Not Mention The Size
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    return 0;

}