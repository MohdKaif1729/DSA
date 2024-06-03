#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n, max = INT_MIN, smax = INT_MIN, temp = 0 ;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int arr[n], count = 0;
    cout<<"Enter The Elements Of Array : ";
    int k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            k = i;
            max = arr[i];
            if(arr[temp]>smax && arr[temp]<max) smax = arr[temp];
            temp = k;
        }
    }
    // for(int i=0;i<n;i++){
    //     if(arr[i]>smax && arr[i]<max) smax = arr[i];
    // }
    cout<<"Second Maximum Element In An Array Is "<<smax;
    return 0;
}