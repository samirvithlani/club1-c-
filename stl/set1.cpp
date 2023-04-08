#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){

    set<string>set1;
    set1.insert("zara");
    set1.insert("amit");
    set1.insert("amit");
    set1.insert("neha");
    set1.insert("jay");
    set1.insert("Anita");
    set1.insert("Amita");

    //cout<<set1.empty();

   cout<<"\n removed???"<<set1.erase("amit");
    //set1.clear();
    cout<<"\n count --->"<<set1.count("amit");
    
    for(auto i:set1){
        cout<<i<<endl;
    }

}