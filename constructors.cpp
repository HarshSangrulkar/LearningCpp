#include<iostream>
using namespace std;

class Construct{
    public:
    int a,b;
    //default constructor has no parameters
    Construct(){
        a=10;
        b=20;

    }
    Construct(int x,int y){
        a=x;
        b=y;
    }
};
int main(){
    Construct c;
    //default constructor is called automatically when object is created.
    cout<<"a is"<<c.a<<" b is"<<c.b;

    //parametrised constructor
    Construct c2(45,55);
    cout<<"\na is"<<c2.a<<" b is"<<c2.b;
}