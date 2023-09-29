#include<iostream>
using namespace std;

class Box{
    public:
    double width;
    double length;
    double height;
};

int main(){
    Box B1;

    B1.height=10;
    B1.length=15;
    B1.width=20;
    double volume = B1.height*B1.length*B1.width;

    cout<<"volume of box is"<<volume;
    return 0;
}