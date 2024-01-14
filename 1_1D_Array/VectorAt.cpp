#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;// You Need Not Mention The Size
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);
    v.at(2) = 8;// Both Are Same 
    v[2] = 10;// Both Are Same
    cout<<v.at(2)<<" ";
    cout<<v[2];
    return 0;

}