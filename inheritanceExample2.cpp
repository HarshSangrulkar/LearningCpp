#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Car {
    public:
    int nog;
    string col;
    // Write your constructor and printCarInfo method here.
    public:
    Car(int noOfGear, string color){
        
      
    }
    void printInfo(){
            cout<<"\nnoOfGear: "<<nog<<"\ncolor: "<<col;
        }
    
};


class RaceCar: public Car {
    // Write your constructor and printRaceCarInfo method here.
    public:
    int ms;
    Racecar(int maxSpeed){
        
    }
    void printRaceCarInfo(){
        cout<<"\nnoOfGear: "<<nog<<"\ncolor: "<<col<<"\nmaxSpeed: "<<ms;
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