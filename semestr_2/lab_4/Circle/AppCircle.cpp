#include "AppCircle.h"
#include <vector>
#include <algorithm>

int AppCircle::start() {

  vector<Shape*> shapes;
  char choice;

  do {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    shapes.push_back(new Circle(radius));
    cout << "Do you want to add another circle? (y/n): ";
    cin >> choice;
    
    } while (choice == 'y');

  
  cout << "\n";

  cout << "All shapes:\n";
  for (const auto& shape : shapes) {
    shape->draw();
  }
  double totalArea = 0, totalPerimeter = 0, totalMass = 0;
  for (const auto& shape : shapes) {
    totalArea += shape->area();
    totalPerimeter += shape->perimeter();
    totalMass += shape->mass();
  }
  cout << "\n";

  cout << "Total area: " << totalArea << "\n";
  cout << "Total perimeter: " << totalPerimeter << "\n";
  cout << "Total mass: " << totalMass << "\n";
  cout << "\n";

  double totalX = 0, totalY = 0;
  for (const auto& shape : shapes) {
    totalX += shape->mass() * shape->mass() / 2;
    totalY += shape->mass() * shape->mass() / 2;
  }
  cout << "Center of mass: (" << totalX / totalMass << "," << totalY / totalMass << ")\n";
  cout << "Memory occupied by all instances of classes: " << shapes.size() * sizeof(Circle) << "\n";
  cout << "\n";
  
  sort(shapes.begin(), shapes.end(), [](const auto& a, const auto& b) {return a->mass() < b->mass();});
  cout << "Shapes sorted by mass:\n";
  for (const auto& shape : shapes) {
    shape->draw();
  }

  for (const auto& shape : shapes) {
    delete shape;
  }
  
  return 0;

}

