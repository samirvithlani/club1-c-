#include<iostream>
#include<vector>
#include<string>

//vector is class template
using namespace std;
int main(){

    vector<string>v;
    v.push_back("ram");
    v.push_back("raj");
    v.push_back("shyam");
    v.push_back("ravan");
    v.push_back("sita");
    v.push_back("laxman");

    v.at(0) ="RAM";


    cout<<v.at(1);
    cout<<"\n "<<v.front();
    cout<<"\n "<<v.back();
    



}