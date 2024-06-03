#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int>& v, int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    return;
}
int main(){
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter The Elements Of Array :\n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    //pass 1
    int i = 0, j = n - 1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==2) j--;
        if((v[i]==2&&v[j]==0)||(v[i]==1&&v[j]==0)||(v[i]==2&&v[j]==1)){
            swap(v,i,j);
            i++;
            j--;
        }
        if(v[i]==1 && v[j]==1){
            if(v[i+1]==0){
                swap(v,i,j);
                i++;
            }
            if(v[j-1]==2){
                swap(v,i,j);
                j--;
            }
            if(v[i+1]==1 && v[j-1]==1){
                i++;
                j--;
            }
            if(v[i+1]==2) i++;
        }
    }
    // pass 2
    // int count0 = 0,count1 = 0,count2 = 0;
    // for(int i=0;i<n;i++){
    //     if(v[i]==0) count0++;
    //     else if(v[i]==1) count1++;
    //     else count2++;
    // }
    // int s = count1+count0;
    // for(int i=0;i<n;i++){
    //     if(i<count0) v[i] = 0;
    //     else if(i>=count0 && i<s) v[i] = 1;
    //     else if(i>=s && i<count2+s) v[i] = 2;
    // }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}