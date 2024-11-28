#include "Car.h"
#include <iostream>


Car::Car(const std::string& brand, const std::string& model)
    : brand(brand), model(model), wheels(4) {}

Engine Car::getEngine() const {
    return engine;
}

std::vector<Wheel> Car::getWheels() const {
    return wheels;
}

std::string Car::getModel() const {
    return model;
}

std::string Car::getBrand() const {
    return brand;
}

void Car::setEngine() {
    engine.setHorsepower(150);
    engine.setDisplacement(2.0);
}

void Car::setWheels() {
    for (auto& wheel : wheels) {
        wheel.setSize(17);
        wheel.setType("kesarengas");
    }
}

void Car::setModel(const std::string& model) {
    this->model = model;
}

void Car::setBrand(const std::string& brand) {
    this->brand = brand;
}


void Car::printDetails() const {
    std::cout << "Auto: " << brand << " " << model << std::endl;

    std::cout << "Moottori: " << engine.getHorsepower() << " hp, "
              << engine.getDisplacement() << " L" << std::endl;

    for (size_t i = 0; i < wheels.size(); ++i) {
        std::cout << "Rengas " << (i + 1) << ":"
                  << wheels[i].getSize() << " tuumaa, "
                  << wheels[i].getType() << std::endl;
    }
}
