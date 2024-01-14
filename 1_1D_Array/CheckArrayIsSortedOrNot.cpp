#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, temp = 0;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter The Element Of Array : \n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i] > v[i+1]){
            temp = 0;
            break;
        }
        else{
            if(v[i] < v[i+1]) temp++;
        }
    }
    if(temp == 0 || (temp < v.size()-1)) cout<<"This Array Is Not Sorted";
    else cout<<"This Array Is Sorted";


    return 0;
}