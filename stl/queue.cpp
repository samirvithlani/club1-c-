#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){

    queue<string> q;
    q.push("java");
    q.push("python");
    q.push("c++");
    q.push("c");
    q.push("c#");
    
    q.pop();
    cout<<q.empty();
    cout<<"\n back"<<q.back()<<endl;
    
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

}