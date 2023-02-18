#include<iostream>
using namespace std;

class Vehicle{    
    int x;
    public:
    int wheels;
    int seats;
    int speed;
    int fuel;
    char vehName[30];

    void getVehData(){

        cout<<"\n enter x";
        cin>>x;
        cout<<"\n enter vehName :: ";
        cin>>vehName;
        cout<<"\n enter wheels :: ";
        cin>>wheels;
        cout<<"\n enter seats :: ";
        cin>>seats;
        cout<<"\n enter speed :: ";
        cin>>speed;
        cout<<"\n enter fuel :: ";
        cin>>fuel;
       
    }
    //creating definition of printVehData() function
    void printVehData();
    
};

//:: scope resolution operator
void Vehicle :: printVehData(){

    cout<<"\n vehName - "<<vehName;
    cout<<"\n wheels - "<<wheels;
    cout<<"\n seats - "<<seats;
    cout<<"\n speed - "<<speed;
    cout<<"\n fuel - "<<fuel;
    cout<<"\n x - "<<x;
}

int main(){

    Vehicle v;
    v.getVehData();
    v.printVehData();

}