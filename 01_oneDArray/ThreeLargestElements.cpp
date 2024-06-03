#include<iostream>
#include<vector>
#include<climits>
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
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v.at(i)>max1) max1 = v.at(i);
    }
    for(int i=0;i<v.size();i++){
        if(v.at(i)>max2 && v.at(i)<max1) max2 = v.at(i);
    }
    for(int i=0;i<v.size();i++){
        if(v.at(i)>max3 && (v.at(i)<max1 && v.at(i)<max2)) max3 = v.at(i);
    }
    cout<<"Three Largest Element In An Array Is : "<<max1<<" "<<max2<<" "<<max3;
    return 0;
}