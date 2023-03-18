#include<iostream>
#include<string>

using namespace std;

int main(){


    //char name[30]="Raj";
    string name1;
    cout<<"Enter your name: ";
    getline(cin,name1);
    cout<<"Your name is: "<<name1<<endl;

    //find length of string
    int l = name1.length();
    cout<<"Length of string is: "<<l<<endl;


    name1.push_back('a');
    name1.push_back(' ');

    name1.push_back('x');
    cout<<"Your name is: "<<name1<<endl;

    name1.pop_back();
    cout<<"Your name is: "<<name1<<endl;
    




}