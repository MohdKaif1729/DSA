#include<iostream>
using namespace std;
int main(){
    int marks[7] = {90,33,34,34,40,85,95};
    for(int i=0;i<7;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
    return 0;
}