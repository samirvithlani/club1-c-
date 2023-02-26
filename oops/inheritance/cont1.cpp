#include<iostream>
using namespace std;

class Test{

    public:

    int x;

    int  testing(int x1){
        x = x1;
        return x;
    }


};

int main(){


    Test t1;
    int ans = t1.testing(10);
    Test t2;
    int ans2 = t2.testing(20);
    Test t3;
    int ans3 = t3.testing(30);

    
    cout<<"\n value of x is "<<ans2;
    cout<<"\n value of x is "<<ans;
    cout<<"\n value of x is "<<ans3;


}