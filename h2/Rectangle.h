#ifndef Rectangle_h
#define Rectangle_h



class Rectangle {

private:
    double width;
    double height;

public:
    void setWidth(double w);
    void setHeight(double h);

    double getArea() const;
    double getCircum() const;
};

#endif
