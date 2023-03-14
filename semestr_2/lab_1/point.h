struct Point {
    int x;
    int y;
};

void shift_point(Point *c, int x, int y);
void shift_ref(Point &c, int x, int y);

void shift_ref(Point &c, int x, int y) {
    c.x += x;
    c.y += y;
}

void shift_point(Point *c, double x, double y) {
    c->x += x;
    c->y += y;
}
