#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"base called";
    }
};
class Sub: public Base{
    public:
    void show(){
        cout<<"sub is called";
    }
};
// Example of runtime polymorphism
int main(){
    Sub s;
    s.show();
}

