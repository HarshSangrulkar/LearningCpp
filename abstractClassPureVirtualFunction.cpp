/*abstract class- has atleast one 
pure virtual function.

we cannot declare object of abstract class

pure virtual function- function with no 
defination

class A{
    public:
    virtual void show()=0;
}*/

#include<iostream>
using namespace std;

class A{
    public: 
    virtual void show()=0;
    void display(){
        cout<<"haha";
    }

};
class B: public A{
    public:
    void show(){
        cout<<"hehehe";
    }
};
int main(){
    B ob;
    ob.display();
    ob.show();
}