#include<iostream>
using namespace std;

class MacDGloble{

public:

    void burger(){
        cout<<"Burger globle"<<endl;
    }

};

class Macd : public MacDGloble{

public:

    void burger(){
        cout<<"Burger macd"<<endl;
        return 0;
    }

};



int main(){


    Macd m;
    m.burger();


}
