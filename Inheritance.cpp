#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    string name;
};
class Male: public Human{
    public:
    void details(){
        cout<<"\nname: "<<name<<" age: "<<age<<" is male";
    }
};
class Boys{
    public:
    void display(){
        cout<<"   hhehe suiiii";
    }
};
class Female: public Human{
    public:
    void details(){
        cout<<"\nname: "<<name<<" age: "<<age<<" is female";
        
    }
};
class bhai: public Male{
    public:
    void extradetails(){
        cout<<" likes playing cricket";
    }

};
class bro: public bhai, public Boys{
    public:
    void show(){
        cout<<", and is best at it";
    }
};
int main(){
    Male m1;
    m1.name="Harsh";
    m1.age=19;

    Female f1;
    f1.name="Chaitralee";
    f1.age=13;

    m1.details();
    f1.details();

    bhai b1;
    b1.name="Harsh Vinayak Sangrulkar";
    b1.age=19;
    b1.details();
    b1.extradetails();

    bro h1;
    h1.name="Harsh";
    h1.age=19;
    h1.details();
    h1.extradetails();
    h1.show();
    h1.display();
    return 0;
}