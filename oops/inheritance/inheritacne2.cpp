#include<iostream>
using namespace std;

class Vehicle{

public:

    int noWheels;
    int noSeats;
    char color[20];
    char name[20];

    void test(){
        cout<<"\n test";
    }

};
class Car : public Vehicle{

    public:
    void getCarData(){
        test();
        cout<<"\n Enter name = ";
        cin>>name;
        _flushall();
        cout<<"\n Enter no of wheels = ";
        cin>>noWheels;
        cout<<"\n Enter no of seats = ";
        cin>>noSeats;
        cout<<"\n Enter color = ";
        cin>>color;
        
    }
    void printCarData(){
        cout<<"\n name = "<<name;
        cout<<"\n no of wheels = "<<noWheels;
        cout<<"\n no of seats = "<<noSeats;
        cout<<"\n color = "<<color;
    }
};
class Bus : public Vehicle{
      public:
    void getBusData(){
        test();
        cout<<"\n Enter name = ";
        cin>>name;
        _flushall();
        cout<<"\n Enter no of wheels = ";
        cin>>noWheels;
        cout<<"\n Enter no of seats = ";
        cin>>noSeats;
        cout<<"\n Enter color = ";
        cin>>color;
        
    }
    void printBusData(){
        cout<<"\n name = "<<name;
        cout<<"\n no of wheels = "<<noWheels;
        cout<<"\n no of seats = "<<noSeats;
        cout<<"\n color = "<<color;
    }

};

int main(){

    Car c;
    c.test();
    c.getCarData();
    c.printCarData();
    

    Bus b;
    b.test();
    b.getBusData();
    b.printBusData();

}