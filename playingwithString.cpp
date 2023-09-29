#include<iostream>
#include<string>
using namespace std;

class Person{
    int age;
    string name;
    public:
    string getName(){
        return name;

    }
    void setName(string a){
        name=a;

    }
    int getAge(){
        return age;

    }
    void setAge(int b){
        age=b;

    }

};

int main(){
    Person p1;
    p1.setAge(67);
    p1.setName("Afzal");
    
    cout<<"The name of the person is "<<p1.getName()<<" and the age is "<<p1.getAge()<<" .";
    
    Person p2;
    p2.setAge(30);
    p2.setName("Ali");
    
    cout<<"\nThe name of the person is "<<p2.getName()<<" and the age is "<<p2.getAge()<<" .";
    
}