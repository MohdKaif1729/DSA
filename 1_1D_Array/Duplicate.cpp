#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int arr[n], count = 0;
    cout<<"Enter The Elements Of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Duplicate No. In An Array Are :\n";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    return 0;
}
