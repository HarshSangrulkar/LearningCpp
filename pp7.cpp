#include<iostream>
using namespace std;

class Alpha{
    public:
    Alpha(){
        cout<<"base constructor Alpha";
    }
};
class Beta{
    public:
    Beta(){
        cout<<"base constructor Beta";
    }
};
class Gamma: public Alpha, public Beta{
    public:
    Gamma(){
        cout<<"derived constructor gamma";
    }
};
int main(){
    Gamma g;

}