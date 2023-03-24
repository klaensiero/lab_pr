#include "Drawing.h"

void Drawing::draw(const Parallelogram& p) {
    double width = p.getBase();
    double height = p.getHeight();
    double angle = p.getAngle();
    std::cout << "Drawing parallelogram with base " << width << ", height " << height << ", and angle " << angle << "\n";
    
}
