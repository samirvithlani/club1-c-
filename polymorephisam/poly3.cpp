#include<iostream>
using namespace std;

class Trai{

    public:
    //pure virtual function
    //abstract class
    virtual void call() =0;

};
class Jio: public Trai{

public:
    void call(){
        cout<<"Jio calling"<<endl;
    }

};

int main(){


    Jio j;
    j.call();
    

}