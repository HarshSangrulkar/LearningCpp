#include<iostream>
using namespace std;
class A{
    public:
    void abc(){
        cout<<"class A";
    }
};
class B{
    public:
    void abc(){
        cout<<"class B";
    }
};
class C: public A, public B{
    public:
    void show(){
        cout<<"\nabc";
    }
};
int main(){
    C obj;
    obj.A::abc();
    obj.show();


}