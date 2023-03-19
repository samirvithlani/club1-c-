#include<iostream>
using namespace std;

class Compare{

public:

    int x;

    bool operator ==(Compare c){
        cout<<"\n x ="<<x;
        cout<<"\n x ="<<c.x;
        if(x == c.x){
            return true;
        }
        else{
            return false;
        }

    }

};


int main(){

    Compare c1;
    Compare c2;
    c1.x = 100;
    c2.x = 100;

    if(c1==c2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }

}