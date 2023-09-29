#include<iostream>
using namespace std;

int add(int x, int y){
    int sum=x+y;
    return sum;
}
double add(int x, double y){
    double sum=x+y;
    return sum;
}
double add(int x, double y, float z){
    double sum=x+y+z;
    return sum;
}
double add(double x,double y, int z=0, int w=0){
    double sum=x+y+z+w;
    return sum;
}
int main(){
    cout<<add(10,20)<<"\n";
    cout<<add(10,15.5)<<"\n";
    cout<<add(5,10,13.4)<<"\n";
    cout<<add(5.6,4.4);

}