#include<iostream>
using namespace std;
class India{

public:
    void swap(int *a,int *b){
        int temp;
        cout<<"\n inside swap before swapping value of a ="<<*a;
        cout<<"\n inside swap before swapping value of a ="<<*b;
        cout<<"\n inside swap before swapping add of a ="<<a;
        cout<<"\n inside swap before swapping add of a ="<<b;

        temp = *a;
        *a = *b;
        *b = temp;

        cout<<"\n inside swap after swapping value of a ="<<*a;
        cout<<"\n inside swap after swapping value of a ="<<*b;
        cout<<"\n inside swap after swapping add of a ="<<a;
        cout<<"\n inside swap after swapping add of a ="<<b;

    }

};

int main(){

    India i;
    int a = 10;
    int b = 20;
    
        cout<<"\n inside  main before swapping value of a ="<<a;
        cout<<"\n inside  main before swapping value of a ="<<b;
        cout<<"\n inside main before swapping add of a ="<<&a;
        cout<<"\n inside main before swapping add of a ="<<&b;
    
        i.swap(&a,&b);
    
        cout<<"\n inside  main after swapping value of a ="<<a;
        cout<<"\n inside  main after swapping value of a ="<<b;
        cout<<"\n inside main after swapping add of a ="<<&a;
        cout<<"\n inside main after swapping add of a ="<<&b;


}