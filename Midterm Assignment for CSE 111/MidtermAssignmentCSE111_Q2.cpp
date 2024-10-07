#include<iostream>
using namespace std;


class Vehicle {
protected:
    int speed;  
public:
    Vehicle(int spd) : speed(spd) {}  
};


class Truck;
class Bike;


class Car : public Vehicle {
public:
    int deck;  
    Car(int spd, int dk) : Vehicle(spd), deck(dk) {}

    
    void middleSpeedChecker(Truck* t, Bike* b);

    friend class Truck;
    friend class Bike;
};


class Truck : public Vehicle {
public:
    int container;  
    Truck(int spd, int ctr) : Vehicle(spd), container(ctr) {}

    friend class Car;
    friend class Bike;
};


class Bike : public Vehicle {
public:
    int paddleGear;  
    Bike(int spd, int gear) : Vehicle(spd), paddleGear(gear) {}

    friend class Car;
    friend class Truck;
};


void Car::middleSpeedChecker(Truck* t, Bike* b) {
    cout << "Checking middle speed for Car, Truck, and Bike..." << endl;

    if (speed > 40 && speed < 60) {
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
    Bike b(65, 2);    

    c.middleSpeedChecker(&t, &b);  
    return 0;
}
