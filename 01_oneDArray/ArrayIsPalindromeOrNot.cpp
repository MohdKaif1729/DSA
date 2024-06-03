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
    for(int i=0;i<(n/2);i++){
       if(v[i]==v[v.size()-1-i]) flag = true;
       else{
        flag = false;
        break;
       }
    }
    if(flag == true) cout<<"Array is Palindrome";
    else cout<<"Array Is Not A Palindrone";
    return 0;
}