#include<iostream>
using namespace std;

class Building{
    int floors,rooms,sqrfootage;
    public:
    void getDetails(){
        cout<<"floors rooms sqrfootage";
        cin>>floors>>rooms>>sqrfootage;
    }
    void display1(){
        cout<<floors<<rooms<<sqrfootage;
    }
    
};
class House: public Building{
    int beds;
    public:
    void getBed(){
        cout<<"beds";
        cin>>beds;
        
    }
    void showbed(){
        cout<<beds;
    }

};
class Office: public Building{
    int fires,teles;
    public:
    void getDeets(){
        cout<<"fires telephones";
        cin>>fires>>teles;
    }
    void showDeets(){
        cout<<fires<<teles;
    }
};
int main(){
    House h;
    h.getDetails();
    h.getBed();
    h.display1();
    h.showbed();
}