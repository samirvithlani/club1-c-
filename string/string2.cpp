#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;
    cout<<"Enter your name: ";
    getline(cin,name);

    

    for(int i=0;i<name.length();i++){
        cout<<name[i]<<endl;
    }
    cout<<"front---"<<name.front()<<endl;
    cout<<"back---"<<name.back()<<endl;
    //element access methods

    //cout<<"at[0]"<<name.at(0);
    name.at(0)='X';
    cout<<"\n name="<<name<<endl;







}