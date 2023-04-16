#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    
    vector<int> v;
    v.push_back(1);
    v.push_back(21);
    v.push_back(7);
    v.push_back(14);
    v.push_back(28);
    v.push_back(5);

    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}