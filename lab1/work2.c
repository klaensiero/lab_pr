#include <stdio.h>
#include <math.h>

int main() {
    double m;
    float a1,a2;
    printf("Введите число: ");
    scanf("%lf", &m);
    a1=(sqrt(pow(3*m+2,2)-24*m))/(3*sqrt(m)-(2/sqrt(m)));
    a2=sqrt(m);
    printf("%.2f %.2f\n", a1, a2);
    return 0;
}