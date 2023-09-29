#include<iostream>
using namespace std;
class Helloworld{
    public:
    Helloworld(){
        cout<<"constructor is called\n";
    }
    ~Helloworld(){
        cout<<"destructor is called\n";
    }
    void display(){
        cout<<"Helloworld\n";
    }
};
int main(){
    Helloworld h;
    h.display();
}