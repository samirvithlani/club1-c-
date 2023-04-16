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

    vector<string> v1;
    v1.push_back("ghi");
    v1.push_back("abc");
    v1.push_back("pqr");
    v1.push_back("def");
    v1.push_back("jkl");
    v1.push_back("mno");
    
    sort(v1.begin(),v1.end());
    for(auto s:v1){
        cout<<s<<" ";
    }

    cout<<"\n";


    // sort(v.begin(),v.end()); // 

    //sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }



}

