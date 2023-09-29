//array of objects

#include<iostream>
using namespace std;

class Bank{
    string name;
    int bal;
    public:
    void input(){
        cout<<"enter deets";
        cin>>name>>bal;
    }
    void output(){
        cout<<name<<bal;
    }
    
};
int main(){
    Bank b[3];
    for(int i=0;i<3;i++){
        b[i].input();

    }
    for(int i=0;i<3;i++){
        b[i].output();
    }
}