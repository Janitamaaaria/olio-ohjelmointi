#ifndef CAR_H
#define CAR_H

#include <string>
#include <vector>
#include "Engine.h"
#include "Wheel.h"

class Car {
private:
    Engine engine;
    std::vector<Wheel> wheels;
    std::string model;
    std::string brand;

public:

    Car(const std::string& brand, const std::string& model);

    Engine getEngine() const;
    std::vector<Wheel> getWheels() const;
    std::string getModel() const;
    std::string getBrand() const;

    void setEngine();
    void setWheels();
    void setModel(const std::string& model);
    void setBrand(const std::string& brand);
    void printDetails() const;
};

#endif
