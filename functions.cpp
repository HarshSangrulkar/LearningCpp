#include<iostream>
using namespace std;

int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
    
}
void sum(int x, int y){
    int sum= x+y;
    cout<<sum;

}
int main(){
    int a=10;
    int b=20;
    cout<<max(a,b);
    sum(30,20);
}