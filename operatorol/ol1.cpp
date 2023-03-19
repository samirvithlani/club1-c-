#include<iostream>
using namespace std;

class Test{

public:

int p;
//t1.p = 100;
//t2.p = 200;

Test(int p1){

    p = p1;

}

//1234 p =1234
void operator +(Test x){
cout<<"\n + function called..."<<x.p;
}
};

int main(){


Test t1(100);
Test t2(200);
t2 + t1;
//1234 p =200
}