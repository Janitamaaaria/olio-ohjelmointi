#include <iostream>
#include "Car.h"

int main() {

    Car car("Corolla", "Toyota");
    car.setEngine();
    car.setWheels();
    car.printDetails();

    return 0;
}
