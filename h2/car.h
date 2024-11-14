#ifndef car_h
#define car_h

#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int yearModel;

public:
    void setBrand(string b);
    void setModel(string m);
    void setYearModel(int y);
    void printData() const;
};

#endif
