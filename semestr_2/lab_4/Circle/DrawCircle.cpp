#include "DrawCircle.h"
#include <iostream>
#include <cmath>

Circle::Circle(double radius) : _radius(radius) {}
double Circle::area() const {
  return M_PI * _radius * _radius;
}
double Circle::perimeter() const {
  return 2 * M_PI * _radius;
}
double Circle::mass() const {
  return area();
}
void Circle::draw() const {
  std::cout << "Drawing a circle with radius " << _radius << "\n";
}
