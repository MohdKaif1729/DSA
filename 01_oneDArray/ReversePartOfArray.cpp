#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,idex1,idex2;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    cout<<"Enter First Index Of Array : ";
    cin>>idex1;
    cout<<"Enter Last Index Of Array : ";
    cin>>idex2;
    cout<<"Enter The Elements Of An Array :\n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=idex1,j=idex2;i<j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}