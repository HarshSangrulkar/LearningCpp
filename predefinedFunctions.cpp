#include<iostream>
#include<cmath>
using namespace std;

/*
max()
min()
sqrt()
round()*/
int main(){
    //maximum of 2 no.s
    int maximum= max(100,30);
    cout<<maximum<<endl;
    //square root of number
    double squareRoot= sqrt(144);
    cout<<squareRoot<<endl;
    //finding length of string
    string a="Coding Ninjas";
    cout<<a.length()<<endl;
    //string to uppercase
    for(int i=0;i<a.length();i++){
        putchar(toupper(a[i]));
    }
    //size of string
    cout<<"\n"<<sizeof(a);
    string b="hello world";
    cout<<"\n"<<sizeof(b)<<endl;
    //string.size() also returns length of the string
    cout<<b.size();
    //x to the power y
    int x=2;
    int y=3;
    cout<<"\n"<<pow(2,3);
    cout<<"\n"<<pow(x,y);
}
