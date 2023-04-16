#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
int main(){

    int a[16]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,6,78};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);

    //v.erase(v.find(v.begin(),v.end(),5));
    //v.erase(v.begin()+2);
    //v.erase(unique(v.begin(),v.end()),v.end());
    //v.erase(remove(v.begin(),v.end(),78),v.end());
    //v.erase(unique(v.begin(),v.end()),v.end());
    //remove duplicate elements
    v.erase(unique(v.begin(),v.end()),v.end());


    for(auto i:v){
        cout<<i<<" ";
    }


}