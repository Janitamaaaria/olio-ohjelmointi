#include <iostream>
#include <car.h>
#include "Rectangle.h"
#include <memory>
#include "Student.h"


using namespace std;


int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(1998);

    cout << "Car information: " << endl;
    myCar.printData();
    cout << endl;


    Rectangle myRectangle;

    myRectangle.setWidth(5.0);
    myRectangle.setHeight(5.0);
    cout << "Rectangle information: " << endl;
    cout << "Area: " << myRectangle.getArea()<< endl;
    cout << "Circumference: " << myRectangle.getCircum() << endl;
    cout << endl;




    unique_ptr<Student> studentPtr = make_unique<Student>();

    studentPtr->setName("Pertti Mukula");
    studentPtr->setStudentNumber(123456);
    studentPtr->setAverage(3.2);

    cout << "Student information: " << endl;
    cout << "Name: " << studentPtr->getName() << endl;
    cout << "Student number: " << studentPtr->getStudentNumber() << endl;
    cout << "Average: " << studentPtr->getAverage() << endl;

    return 0;
}
