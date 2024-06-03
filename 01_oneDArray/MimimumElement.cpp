#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,min = INT_MAX;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<min) min = arr[i];
    }
    cout<<"Mimimum Element In An Array Is "<<min;
    return 0;
}