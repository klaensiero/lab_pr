#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
enum conditer{
    cake, icecream, pie, sweet
};
typedef struct Pt{
    int x;
    int y;
} point;
typedef struct Sq{
    point A;
    point B;
    point C;
    point D;
} square;
unsigned char flags;
double perimetr(struct Sq *s) {
    int AB;
    double zone;
    AB=abs(s->A.x-s->B.x);
    zone=AB*AB;
    return zone;
}
int main() {
    enum conditer cond;
    cond=sweet;
    printf("%d\n", cond+1);
    square h;
    h.A.x=0; h.A.y=4;
    h.B.x=4; h.B.y=4;
    h.C.x=4; h.C.y=0;
    h.D.x=0; h.D.y=0;
    double res=perimetr(&h);
    printf("%lf\n", res);
    return 0;
}