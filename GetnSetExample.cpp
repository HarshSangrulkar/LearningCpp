#include<iostream>
using namespace std;

class Rectangle {
    // Write your code here.
    int length;
    int breadth;
    public:
    int getArea(){
        
        return length*breadth;
    }
    void setArea(int l,int b){
        length = l;
        breadth =b;
        //cout<<"Area of rectangle "<<l*b;
    }
};
int main(){
    Rectangle r1;
    r1.setArea(4,20);
    cout<<r1.getArea();
    
}