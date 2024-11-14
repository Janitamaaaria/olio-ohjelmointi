#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main () {

    vector<Car> carList;

    Car car1("Toyota", "Corolla", 1998);

    Car car2("Toyota", "Rav4", 2021);

    Car car3("Nissan", "Primera", 1992);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    cout << "Toisen auton tiedot: " << endl;
    carList[1].printData();

    cout << "\nKaikkien autojen tiedot: " << endl;
    for (const auto& car : carList) {
        car.printData();
    }
    return 0;

}


