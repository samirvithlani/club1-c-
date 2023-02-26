#include<iostream>
using namespace std;

class Base{

    public:
    Base(){
        cout<<"\n default constructor...";
    }
    Base(int x){
        cout<<"\n parameterized constructor..."<<x;
    }

};

class Child : public Base{

public:
    Child():Base(67){
        cout<<"\n child default constructor...";
    }
    Child(int x){
        cout<<"\n child parameterized constructor..."<<x;
    }
    
};

int main(){

    // Base b1;
    // Base b2(10);

    Child c1(56);


}