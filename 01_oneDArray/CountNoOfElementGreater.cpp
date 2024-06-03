#include<iostream>
using namespace std;
int main(){
    int n,x,temp,count = 0;
    bool flag = false;
    cout<<"Enter the size array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The "<<n<<" Elements Of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter No. You Want To Count Greater Than That No. : ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x < arr[i]){
            count++;
        }
    }
    cout<<"The Total No. Of Element Greater Than "<<x<<" Is "<<count;
    return 0;
}