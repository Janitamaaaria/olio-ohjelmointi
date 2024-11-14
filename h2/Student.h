#ifndef Student_h
#define Student_h

#include <string>
using namespace std;

 class Student {
 private:
     string name;
     int studentNumber;
     double average;
 public:

     void setName(const string &name);
     void setStudentNumber(int studentNumber);
     void setAverage(double average);

     string getName() const;
     int getStudentNumber() const;
     double getAverage() const;


};

#endif
