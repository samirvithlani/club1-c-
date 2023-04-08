#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){

    stack<string> s;
    s.push("java");
    s.push("python");
    s.push("c++");
    s.push("c");
    s.push("c#");

    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"top element: "<<s.top()<<endl;
    cout<<"empty"<<s.empty()<<endl;

    while(!s.empty()){

        cout<<s.top()<<endl;
        s.pop();
    }
    
    

}


