//list vector ---> vector contiguous memory
//list double linked list it is not contiguous memory
//front
//back
//push_front
//push_back
//pop_front
//pop_back
//insert
//erase
//clear
//remove
//unique
//merge
//sort
//reverse
//splice

#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){

    list<string> list1;
    list1.push_back("zara");
    list1.push_back("amit");
    list1.push_front("neha");
    list1.push_front("jay");
    
   
    list<string> list2;
    list2.push_back("parth");
    list2.push_back("priya");
    list2.push_front("pankti");
    list2.push_front("naman");
    
    //auto

    // for(int i=0;i<list.size();i++){
    //     cout<<list[i]<<endl;
    // }

    list1.merge(list2);


    for(auto i:list1){
        cout<<i<<endl;
    }




}


