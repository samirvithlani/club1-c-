#include<iostream>
using namespace std;

class Bank{

    // data members member function are by default private.
    //we can not access private data members outside the class.
    //public lable 
    public:
    //constructor
    // Bank(){
    //     cout<<"Bank default constructor"<<endl;
    // }
    Bank(int x,int y){
       cout<<"Bank param constructor  "<<x<<endl;
    }
    void display(){
        cout<<"Bank display"<<endl;
    }


};
int main(){


    //we need to create an object of class
    Bank b(15,78); //it will call default constructor
    b.display();


}