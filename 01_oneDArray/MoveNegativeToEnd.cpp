#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter The Elements Of Array :\n";
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }//-8 9 5 10 2 6 -7 7
    int i = 0, j = n - 1;
    while(i<j){
        if(arr[i] > 0) i++;
        else if(arr[j] < 0) j--;
        else if((arr[i] < 0) && (arr[j] > 0)){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}