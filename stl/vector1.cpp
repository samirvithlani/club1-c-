#include<iostream>
#include<vector>
#include<string>

//vector is class template
using namespace std;

int main(){

    //
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }

    vector<string> v1;
    v1.push_back("ram");
    v1.push_back("raj");
    v1.push_back("shyam");

    for(int i=0;i<v1.size();i++){
        cout << v1[i] << endl;
    }



}