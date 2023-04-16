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

    cout<<"\n min element from vector is "<<*min_element(v.begin()+2,v.end());
    cout<<"\n min element from vector is "<<*max_element(v.begin(),v.end());

}
