
#include<iostream>

using namespace std;

class Movie{

    public:
    //constructor
    Movie(int x);

    void display();
};

void Movie:: display(){
    cout<<"Movie display"<<endl;
}

Movie::Movie(int x){
    cout<<"Movie default constructor "<<x<<endl;
}

int main(){

    Movie m(45); //default constructor
    m.display();

    
}