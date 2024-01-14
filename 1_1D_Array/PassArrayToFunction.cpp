#include<iostream>
using namespace std;
void display(int a[]){ // here a is pointer
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
// Array Pass By Refrence
// a, b, arr All Three Point To Main Function Array
void change(int b[]){
    b[0] = 100;
    return;
}
int main(){
    int arr[7] = {2,9,8,1,5,2,6};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    display(arr);
    change(arr);
    display(arr);
    return 0;
}