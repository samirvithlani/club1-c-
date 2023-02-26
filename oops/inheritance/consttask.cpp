#include<iostream>
using namespace std;

class Bank{

public:

    int x,y;

    Bank(){
        x = 100,y=200;
        cout<<"\n Bank default constructor...";
    }
    Bank(int x1,int y1 ){
        x = x1;
        y = y1;
        cout<<"\n Bank parameterized constructor..."<<x<<","<<y;
    }

    void display(){
        cout<<"\n x = "<<x<<" y = "<<y;
    }
};
class SBI : public Bank{

    public:
    SBI():Bank(10,20){
        cout<<"\n SBI default constructor...";
    }
    SBI(int x1,int y1){
        cout<<"\n SBI parameterized constructor..."<<x1<<","<<y1;
    }

};

int main(){

    SBI s1;
    s1.display();

}