#include <iostream>
#include <vector>
#include "AppParallelogram.h"

int App_parallelogram::start() {
    vector<Parallelogram> shapes;
    char choice;
    do {
        double b, h, a;
        cout << "Enter the base, height, and angle of the parallelogram separated by spaces: ";
        cin >> b >> h >> a;
        shapes.emplace_back(b, h, a);
        cout << "Do you want to add another parallelogram? (y/n): ";
        cin >> choice;
    } while (choice == 'y');
    cout << "\n";
    cout << "All shapes:\n";
    for (const auto& shape : shapes) {
        cout << "Parallelogram with base " << shape.getBase() << ", height " << shape.getHeight() << ", and angle " << shape.getAngle() << "\n";
        cout << "Area: " << shape.area() << "\n";
        cout << "Perimeter: " << shape.perimeter() << "\n";
        cout << "\n";

        Drawing::draw(shape);
    }

    return 0;

}

