#include<iostream>
using namespace std;

class Base{

public:
    int x ; //class level variable
    Base(int x1){
        //to intance variable of class
        x = x1;
        cout<<"\n default constructor...";
    }
    void test(){
        cout<<"\n test method...";
    }


};


int main(){


    Base b1(140); //default constructor
    Base b2(47); //default constructor
    Base b3(78); //default constructor

    cout<<"\n value of x is "<<b1.x;
    cout<<"\n value of x is "<<b2.x;
    cout<<"\n value of x is "<<b3.x;

    
    // b.test();

}