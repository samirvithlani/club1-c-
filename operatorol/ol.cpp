#include<iostream>
using namespace std;

class Test{

public:

void operator --(){
    //-- decrement..
    //you can write any logic
    cout<<"Operator Overloading"<<endl;
}


};

int main(){

    Test t;
    ++t;

}