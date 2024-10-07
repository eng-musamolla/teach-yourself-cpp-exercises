#include<iostream>
using namespace std;


class Vehicle {
protected:
    int speed;  
public:
    Vehicle(int spd) : speed(spd) {}  
};


class Car;
class Bike;


class Truck : public Vehicle {
public:
    int container;  
    Truck(int spd, int ctr) : Vehicle(spd), container(ctr) {}

    void middleSpeedChecker(Car* c, Bike* b);  

    friend class Car;
    friend class Bike;
};


class Car : public Vehicle {
public:
    int deck;  
    Car(int spd, int dk) : Vehicle(spd), deck(dk) {}

    friend class Truck;
    friend class Bike;
};


class Bike : public Vehicle {
public:
    int paddleGear;  
    Bike(int spd, int gear) : Vehicle(spd), paddleGear(gear) {}

    friend class Truck;
    friend class Car;
};


void Truck::middleSpeedChecker(Car* c, Bike* b) {
    cout << "Checking middle speed for Truck, Car, and Bike..." << endl;

    if (speed > 40 && speed < 60) {
        cout << "Truck is running at a medium speed." << endl;
    } else {
        cout << "Truck is not running at a medium speed." << endl;
    }

    if (c->speed > 40 && c->speed < 60) {
        cout << "Car is running at a medium speed." << endl;
    } else {
        cout << "Car is not running at a medium speed." << endl;
    }

    if (b->speed > 40 && b->speed < 60) {
        cout << "Bike is running at a medium speed." << endl;
    } else {
        cout << "Bike is not running at a medium speed." << endl;
    }
}


int main() {
    Truck t(10, 10);  
    Car c(50, 4);     
    Bike b(50, 2);    

    t.middleSpeedChecker(&c, &b);  
    return 0;
}
