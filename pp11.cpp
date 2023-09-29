#include<iostream>
using namespace std;

class Bank{
    public:
    virtual void getInterest()=0;
    virtual void setInterest()=0;
    void display(){
        cout<<"hehehe\n";
    }
};
class HDFC: public Bank{
    public:
    void getInterest(){
        cout<<"hdfc interet is";
    }
    void setInterest(){
        cout<<"7.5";
    }
};
int main(){
    HDFC h;
    h.getInterest();
    h.setInterest();
}