#include<iostream>
using namespace std;
class box{
    private:
    int length,breadth,height;
    public:
    void setValues(int l,int b,int h){
        length=l;
        breadth=b;
        height=h;
    }
    void showData(){
        cout<<"\nlength= "<<length<<"\nbreadth= "<<breadth<<"\nheight= "<<height;
    }

};
int main(){
    box b1,b2;
    b1.setValues(5,10,15);
    b1.showData();

    b2=b1;
    b2.showData();

    box b3 =b2;
    b3.showData();
}