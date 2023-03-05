#include<iostream>
using namespace std;
class B;
class A{

public:
    int x=100;
    friend void calc(A a,B b);

};
class B{
public:
    int y = 200;
    friend void calc(A a,B b);
};

void calc(A a,B b){

    int sum = a.x + b.y;
    cout<<"Sum is "<<sum<<endl;

}


int main(){

    A obj1;
    B obj2;
    calc(obj1,obj2);

}