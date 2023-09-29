#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car {
    // Write your constructor and printCarInfo method here.
    public:
    int gears;
    string color;
    Car(){
        
    }
    Car(int x, string y){
        gears=x;
        color=y;
    }
    void CarInfo(){
        cout<<"noOfGear: "<<gears<<"\ncolor: "<<color;
        }
};
class RaceCar: public Car{
    public:
    int maxspeed;
    RaceCar(int x, string y, int z){
        gears=x;
        color=y;
        maxspeed=z;
        
    }
    void printInfo(){
        cout<<"noOfGears: "<<gears<<"\ncolor: "<<color<<"\nmaxSpeed: "<<maxspeed;
    }
};





int main() {
    int noOfGear, maxSpeed;
    string color;
    cin >> noOfGear >> color >> maxSpeed;
    RaceCar raceCar(noOfGear, color, maxSpeed);
    raceCar.printInfo();
    return 0;
}