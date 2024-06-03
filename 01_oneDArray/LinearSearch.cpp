#include<iostream>
using namespace std;
int main(){
    int n,x,temp;
    bool flag = false;
    cout<<"Enter the size array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter The "<<n<<" Elements Of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter No. What You Want To Search In An Array : ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x == arr[i]){
            flag = true;
            temp = i;
        }
    }
    if(flag == true) cout<<x<<" Element Is Present At "<<temp<<" Index";
    else cout<<x<<" Element Is Not Present In An Array";
    return 0;
}