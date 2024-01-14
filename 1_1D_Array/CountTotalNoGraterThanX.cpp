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
    }
    int x,count = 0;
    cout<<"Enter Number You Want To Check Element Is Greater Or Not : ";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(v.at(i) > x) count++;
    }
    cout<<"Total No Greater Than "<<x<<" Is "<<count;
    return 0;
}