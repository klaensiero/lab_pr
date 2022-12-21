#include "math.h"
#include "work11.h"

void Square(struct Triangle *temp){
    temp->square = 0.5*(((temp->y1 - temp->x1)*(temp->z2 - temp->x2)) - ((temp->z1 - temp->x1)*(temp->y2 - temp->x2)));
}