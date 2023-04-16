#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){

     vector<int> v;
    v.push_back(1);
    v.push_back(21);
    v.push_back(7);
    v.push_back(7);
    v.push_back(7);
    v.push_back(14);
    v.push_back(28);
    v.push_back(5);


    cout<<"\n sum of all elm = "<<accumulate(v.begin(),v.end(),0);
    cout<<"\n count  = "<<count(v.begin(),v.end(),7);

}