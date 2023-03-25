#include<iostream>
using namespace std;

template<class T>class Test{
public:
void getData(T a,T b){
    cout << a << endl;
    cout << b << endl;
}
};

int main(){

    // Test<int> t;
    // t.getData("ram","raj");

    //Test <string> t;
    Test<char> t;
    t.getData(65,97);

    Test<int> t1;
    t1.getData(10,20);

    return 0;
}