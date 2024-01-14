#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,max = INT_MIN;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max) max = arr[i];
    }
    cout<<"Maximum Element In An Array Is "<<max;
    return 0;
}