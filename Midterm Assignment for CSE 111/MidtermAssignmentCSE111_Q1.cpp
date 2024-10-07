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
class Bike;


void middleSpeedChecker(Car* c, Truck* t, Bike* b);


class Car : public Vehicle {
public:
    int deck;  
    Car(int spd, int dk) : Vehicle(spd), deck(dk) {}

    
    friend void middleSpeedChecker(Car* c, Truck* t, Bike* b);
};


class Truck : public Vehicle {
public:
    int container;  
    Truck(int spd, int ctr) : Vehicle(spd), container(ctr) {}

    
    friend void middleSpeedChecker(Car* c, Truck* t, Bike* b);
};


class Bike : public Vehicle {
public:
    int paddleGear;  
    Bike(int spd, int gear) : Vehicle(spd), paddleGear(gear) {}

    
    friend void middleSpeedChecker(Car* c, Truck* t, Bike* b);
};


void middleSpeedChecker(Car* c, Truck* t, Bike* b) {
    cout << "Checking middle speed for Car, Truck, and Bike..." << endl;

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

    if (b->speed > 40 && b->speed < 60) {
        cout << "Bike is running at a medium speed." << endl;
    } else {
        cout << "Bike is not running at a medium speed." << endl;
    }
}


int main() {
    Car c(50, 4);     
    Truck t(55, 10);  
    Bike b(30, 2);    

    middleSpeedChecker(&c, &t, &b);  
    return 0;
}
