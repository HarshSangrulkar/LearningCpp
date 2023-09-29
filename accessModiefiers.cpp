#include<iostream>
using namespace std;

class oops{
    private:
    int a,b;
    public:
    void func1(){
        cout<<"function 1";
    }
    void getNum(int x, int y){
        a=x;
        b=y;

    }
    void setNum(){
        cout<<a<<" "<<b;

    }

};
int main(){
    oops o1;
    o1.func1();
    o1.getNum(10,20);
    o1.setNum();
    
    return 0;
}