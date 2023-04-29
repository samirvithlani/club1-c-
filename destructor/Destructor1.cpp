#include<iostream>
using namespace std;

class Movie{

public:
    int x; //instance variable

    Movie(){
        x=10;
        cout<<"Constructor called"<<endl;
    }
    //destructor
    ~Movie(){
        x=0;
        cout<<"Destructor called"<<endl;
    }

};
int main(){

    Movie m1;
    cout<<m1.x<<endl;
    return 0;

}
