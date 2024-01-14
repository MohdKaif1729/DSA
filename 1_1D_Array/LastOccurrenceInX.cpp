#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x = 7, temp;
    vector <int> v;
    v.push_back(10);
    v.push_back(12);
    v.push_back(13);
    v.push_back(7);
    v.push_back(17);
    v.push_back(9);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    for(int i=0;i<v.size();i++){
        if(v.at(i) == x) temp = i;
    }
    cout<<"The Index Of X Is : "<<temp;
    return 0;
}