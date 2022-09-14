#include <stdio.h>
#include <math.h>

int main() {
    double m;
    float z1,z2;
    printf("Введите число: ");
    scanf("%lf", &m);
    z1=(sqrt(pow(3*m+2,2)-24*m))/(3*sqrt(m)-(2/sqrt(m)));
    z2=sqrt(m);
    printf("%.2f %.2f\n", z1, z2);
    return 0;
}