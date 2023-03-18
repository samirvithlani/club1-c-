#include<iostream>
#include<string>
using namespace std;

int main(){


    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    string name2 ;
    cout<<"Enter your name: ";
    getline(cin,name2);
    if(name.compare(name2)==0){
        cout<<"name is equal to name2"<<endl;
        
    }
    else{
        
        cout<<"name is not equal to name2"<<endl;
    }


}