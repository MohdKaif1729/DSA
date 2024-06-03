#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& a){// Generall Vector Pass In A Function By Value 
    a[0] = 100;// But Using & Here Pass By Reference
    return;
}
int main(){
    vector <int> v;// You Need Not Mention The Size
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}