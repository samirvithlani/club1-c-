#include<iostream>
using namespace std;

class Student{

    //private
    //instance varibale / class level variable....
    int x;
    //variable.....
    //private....
    //in a c++ when we declare a variable inside a class then it 
    //is private by default and private varibale can not access outside of calss
    //if you want to access this varibale outside of class then you
    // have to make it public
    public:
    int srno;
    char name[20];
    float marks;

};

int main(){

    //local variable....
    int a;
    //object creation
    //class name space object name....
    Student s;
    cout<<"\n enter srno :: ";
    cin>>s.srno;
    cout<<"\n enter name :: ";
    cin>>s.name;
    cout<<"\n enter marks :: ";
    cin>>s.marks;

    cout<<"\n srno :: "<<s.srno;
    cout<<"\n name :: "<<s.name;
    cout<<"\n marks :: "<<s.marks;


}