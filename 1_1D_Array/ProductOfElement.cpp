#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    int arr[n], count = 0;
    cout<<"Enter The Elements Of Array : ";
    int product = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        product = product*arr[i];
    }
    cout<<"Product Of Elements Of An Array Is : "<<product;
    return 0;
}
