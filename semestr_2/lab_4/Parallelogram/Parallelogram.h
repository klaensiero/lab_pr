#pragma once
#include "Shape.h"

class Parallelogram : public Shape {
public:
    Parallelogram(double b, double h, double a);
    double area() const override;
    double perimeter() const override;
    double getBase() const;
    double getHeight() const;
    double getAngle() const;
private:
    double base;
    double height;
    double angle;
};
