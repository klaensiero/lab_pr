#pragma once
class Shape {
public:
  virtual ~Shape() {}
  virtual double area() const = 0;
  virtual double perimeter() const = 0;
  virtual double mass() const = 0;
  virtual void draw() const = 0;
};
