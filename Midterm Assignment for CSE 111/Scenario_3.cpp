#include<iostream>
using namespace std;




class Vehicle {
protected:
    int speed;  
public:
    Vehicle(int spd) : speed(spd) {}  
};




class Car;
class Truck;
class Bike : public Vehicle {
public:
    int paddleGear;  
    Bike(int spd, int gear) : Vehicle(spd), paddleGear(gear) {}


    void middleSpeedChecker(Car* c, Truck* t);  


    friend class Car;
    friend class Truck;
};


class Car : public Vehicle {
public:
    int deck;  
    Car(int spd, int dk) : Vehicle(spd), deck(dk) {}


    friend class Bike;
    friend class Truck;
};
class Truck : public Vehicle {
public:
    int container;  
    Truck(int spd, int ctr) : Vehicle(spd), container(ctr) {}


    friend class Car;
    friend class Bike;
};
void Bike::middleSpeedChecker(Car* c, Truck* t) {
    cout << "Checking middle speed for Bike, Car, and Truck..." << endl;


    if (speed > 40 && speed < 60) {
        cout << "Bike is running at a medium speed." << endl;
    } else {
        cout << "Bike is not running at a medium speed." << endl;
    }


    if (c->speed > 40 && c->speed < 60) {
        cout << "Car is running at a medium speed." << endl;
    } else {
        cout << "Car is not running at a medium speed." << endl;
    }


    if (t->speed > 40 && t->speed < 60) {
        cout << "Truck is running at a medium speed." << endl;
    } else {
        cout << "Truck is not running at a medium speed." << endl;
    }
}


int main() {
    Bike b(30, 2);    
    Car c(50, 4);    
    Truck t(55, 10);  
    b.middleSpeedChecker(&c, &t);  
    return 0;
}
