#include<iostream>
using namespace std;

class MathSymbol{
    public:
    virtual void doOperation(int x, int y)=0;
    void display(){
        cout<<"kuch nahi";
    }
};
class Plus: public MathSymbol{
    public:
    void doOperation(int x, int y){
        cout<<"does addition"<<x+y;
    }
};
class Minus: public MathSymbol{
    public:
    void doOperation(int x, int y){
        cout<<"does subtraction"<<x-y;
    }
};
int main(){
    //MathSymbol *M;
    Plus p;
    //M=&p;
    p.doOperation(45,30);

    Minus m;
    m.doOperation(45,30);
}