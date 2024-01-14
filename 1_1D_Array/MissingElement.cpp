#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,min = INT_MAX;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of Sorted Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<min) min = arr[i];
    }
    if(min-1) cout<<"The Smallest Element Is "<<min-1<<" Which Is Missing In An Array";
    else cout<<"No Smallest Element Is Missing In An Array";
    return 0;
}