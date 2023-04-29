#include<iostream>
#include<exception>
#include<string>
using namespace std;

int main(){

    int a;
    int b;

    try{
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    if(b==0){
        throw b;
    }

    int c = a/b;
    //terminate....
    cout<<"----------";
    cout<<"The value of c is: "<<c<<endl;
    }
    catch(int e){
        cout<<"Division by zero is not allowed"<<e<<endl;
    }

}