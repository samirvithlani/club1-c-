#include<iostream>
using namespace std;

class Shape{

    public:

    void draw(){
            cout<<"Drawing Shape"<<endl;
    }
    void draw(int a){
            cout<<"Drawing square"<<a*a<<endl;
    }
    void draw(long a){
            cout<<"Drawing long"<<a*a<<endl;
    }
    void draw(int a,int b){
            cout<<"Drawing rectangle"<<a*b<<endl;
    }
    void draw(int a,int b,int c){
            cout<<"Drawing triangle"<<a*b*c<<endl;
    }
    void draw(float r){
            cout<<"Drawing circle"<<3.14 *(r*r)<<endl;
    }



};

int main(){

    Shape s;
    s.draw(12);


}