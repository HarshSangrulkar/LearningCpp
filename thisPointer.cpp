#include<iostream>
using namespace std;
class Emplaoyee{
    public:
    int id;
    string name;
    Emplaoyee(int id, string name){
        //this->local variable=parametrised varaible
        this->id=id;
        this->name=name;

    }
    void display(){
        cout<<id<<" "<<name;
    }
};
int main(){
    Emplaoyee e(45,"Harsh");
    e.display();


}