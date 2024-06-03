#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;// You Need Not Mention The Size
    // Inserting / Input Do Not Use []
    v.push_back(6);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(7);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    //v[1] = 9; // This Also Not Usable
    v.push_back(3);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(2);
    //cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // If You Want To Update / Access 
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";


    return 0;
}