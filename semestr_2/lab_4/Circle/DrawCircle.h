#include "Shape.h"
class Circle : public Shape {
private:
  double _radius;
public:
  Circle(double radius = 0);
  double area() const override;
  double perimeter() const override;
  double mass() const override;
  void draw() const override;
};
