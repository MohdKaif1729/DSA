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
    int SumOfEven = 0, SumOfOdd = 0;
    for(int i=0;i<v.size();i++){
        if(i%2==0) SumOfEven = SumOfEven + v[i];
        else SumOfOdd = SumOfOdd + v[i];
    }
    cout<<"Difference Between Sum Of Odd And Even Indices Is : "<<(SumOfEven-SumOfOdd);
    return 0;
}