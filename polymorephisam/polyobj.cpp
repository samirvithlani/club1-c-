#include<iostream>
using namespace std;

class China{

    public:
    virtual void show()=0;

};

class Xiaomi : public China{

    public:
    void show(){
        cout<<"Xiaomi is a own by chinese..."<<endl;
    }
};


class Zoom : public China{

    public:
    void show(){
        cout<<"Zoom is a own by chinese..."<<endl;
    }


};


int main(){


    //pointer object....
    China *c;
    Zoom z;
    Xiaomi x;

    c = &z;
    //-> this pointer
    c->show();
    c = &x;
    c->show();




}