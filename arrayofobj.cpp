#include<iostream>
using namespace std;

class Student{

    public:
    int rno;
    char name[20];

    Student(){
        cout<<"\n inside default constructor";
    }

    void getData(){

        cout<<"\n enter rno";
        cin>>rno;
        cout<<"\n enter name";
        cin>>name;

    }
    void printData(){

        cout<<"\n rno ="<<rno;
        cout<<"\n name ="<<name;

    }
};


int main(){

    Student s[3];
    // Student s1;
    // Student s2    ;
    // Student s3;
    // s1.getData();
    // s2.getData();
    // s3.getData();
    // s1.printData();
    // s2.printData();
    // s3.printData();
    

    for(int i=0;i<3;i++){
        s[i].getData();
    }
    for(int i=0;i<3;i++){
        s[i].printData();
    }
    
    




}

