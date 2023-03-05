#include<iostream>
using namespace std;

class Box{

public:

    int length=20;
    void color();
    friend void print(Box b);

};

void print(Box b){

    cout<<"Color is Red friend function"<<endl;
    cout<<"Length is "<<b.length<<endl;

}

void Box ::color(){
    
        cout<<"Color is Red"<<endl;
    
}


int main(){

    Box b;
    b.color();
    print(b);



}