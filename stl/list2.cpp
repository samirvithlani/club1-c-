#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){

    list<string> list1;
    list1.push_back("zara");
    list1.push_back("amit");
    list1.push_front("neha");
    list1.push_front("jay");

    list<string> list2;
    list2.push_back("mm");
    list2.push_back("nn");

    //list1.splice(list1.begin(),list1.end());
    list2.splice(list2.end(),list1);

    for(auto i:list2){
        cout<<i<<endl;
    }

}