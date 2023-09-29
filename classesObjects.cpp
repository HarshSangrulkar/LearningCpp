#include<iostream>
#include<string>
using namespace std;

class oops{
    /*class contains variables,
    methods(), constructors*/
    public:
    void text(){
        cout<<"text is accessed";
    }
};


int main(){
    //statically creating object
    oops object1; //class_name object_name
    
    //dynamically creating object
    oops *object2 = new oops;

    /*accessing class members with 
    dot operator-statical allocation
    arrow operator- (dynamic allocation)*/
    object1.text();
    object2->text();
    return 0;
}