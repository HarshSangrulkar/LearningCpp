#include<iostream>
using namespace std;

class Person{
    int id;
    string name;
    public:
    void display(){
        cout<<"id"<<"name";
    }
};
class Account: public Person{
    int pay;
    public:
    void display(){
        cout<<"pay";
    }

};
class Admin: public Person{
    int experience;
    void display(){
    cout<<"experience";
    }

};
class Master: public Account, public Admin{
    void display(){
        cout<<"master";
    }


};
int main(){
    Master m;
    //m.display();

}