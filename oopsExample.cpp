#include<iostream>
#include<string>
using namespace std;

class Person{
    string name;
    int age;
    public:
    void GetValue(){
        cout<<"The name of the person is "<<name<<" and the age is "<<age<<".";
    }
    void SetValue(string s, int a){
        name=s;
        age=a;
    }
    
};
int main(){
    Person p1;
    string name;
    int age;
    cin>>name>>age;
    p1.SetValue(name,age);
    p1.GetValue();
    
}