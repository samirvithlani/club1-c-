#include<iostream>
#include<vector>
#include<string>

//vector is class template
using namespace std;

int main(){


    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(34);
    v.push_back(345);
    v.insert(v.begin()+2,101);
    v.pop_back();

    v.erase(v.begin()+3);
    v.clear();

    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    //cout<<"\n "<<v[0];
    int x = v.size();
    cout<<"\n "<<x;





}