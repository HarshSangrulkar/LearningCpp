#include<iostream>
using namespace std;

int increment(int x, int y){//formal parameter
    x++;
    y=y+2;
    cout<<x<<":"<<y;
}
void passByValue(int x){
    x=50;
    cout<<"value of x in function PBV"<<x;
}
void passByReference(int &x){
    x=50;
    cout<<"value of x in function PBR"<<x;
}
int main(){
    int a=10,b=20;//actual parameter
    increment(a,b);
    cout<<a<<":"<<b;

    int x=10;
    passByValue(x);
    cout<<"value of x in main function "<<x;
    passByReference(x);
    cout<<"value of x in main function "<<x;
}