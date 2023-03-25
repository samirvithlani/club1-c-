#include<iostream>
using namespace std;

//2 type of templates are there     1. function template 2. class template

template<typename T> void test(T a,T b){
    cout << a << endl;
}
template<typename X,typename Y> void demo(X a,Y b){
    
    cout<<"demo";
    cout << a << endl;
    cout << b << endl;
}

template<typename T> int sum(T a,T b){

    return a+b;
}

int main(){

    // test("mmmmmm");
    // test(10);
    // test(10.5);
    // test(10.5f);
    // test(true);

    //test(10,"samir");
    test("ram","ravan");
    test(10,20);

    //demo(10,"mmm");

    string x = sum("ram ","ravn");
    cout << x << endl;
}
