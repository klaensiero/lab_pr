#include "Parallelogram.h"
#include <cmath>

Parallelogram::Parallelogram(double b, double h, double a)
    : base(b), height(h), angle(a) {}

double Parallelogram::area() const {
    return base * height * sin(angle);
}

double Parallelogram::perimeter() const {
    return 2 * (base + height / sin(angle));
}

double Parallelogram::getBase() const {
    return base;
}

double Parallelogram::getHeight() const {
    return height;
}

double Parallelogram::getAngle() const {
    return angle;
}
