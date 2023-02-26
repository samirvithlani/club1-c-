#include<iostream>
using namespace std;

class Gov{
//parent class

    public:
    float taxrate=12;
    int grant=50000;

};
class State: public Gov{

//child class


public:
int roadTax = 45000;
void getData(){
    cout<<"\n tax tate from gov = "<<taxrate;
    cout<<"\n grant from gov = "<<grant;
    }

};

class City: public State{

    public:

    getData1(){

            cout<<"\n tax tate from gov = "<<taxrate;
            cout<<"\n grant from gov = "<<grant;
            cout<<"\n road tax from state = "<<roadTax;

    }
};


int main(){

State s1;
s1.getData();
City c1;
c1.getData1();


}