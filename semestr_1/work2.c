#include <stdio.h>
#include <math.h>
const int iters = 10;
long int fact(int n){
    long int res = 1;
    for(int i = 1; i < n; i++) res += res*i;
    return res;
}
float degree_c(float x, int degree){
    float res = 1;
    for(int i=0; i < degree; i++) res *= x;
    return res;
}
float sine(float x){
    float sin_res = x;
    int check = 1;
    for(int i = 3; i <= iters; i+=2) {
        if (check == 0) {
            sin_res +=  degree_c(x, i) / (float) fact(i);
            check = 1;
        } else {
            sin_res -= degree_c(x, i) / (float) fact(i);
            check = 0;
        }
    }
    return sin_res;
}
float math1 (double m) {
    float z1, zn1;
    zn1 = sqrt(pow(3*m+2,2)-24*m);
    if (zn1 >=0){
        z1=zn1/(3*sqrt(m)-2/sqrt(m));
    }
    return z1;
}
float math2 (double m) {
    float z2;
    if (m>0) {
        z2=-sqrt(m);
    }
    return z2;
}
int main() {
    double m, res1, res2, res3, e;
    int x;
    printf("Введите число: ");
    scanf("%lf", &m);
    if (m==0) {
        printf("Деление на ноль запрещено!");
        printf("z2=0");
        return 0;
    }
    if (m<0) {
        printf("Отрицательные значения запрещены!\n");
        return 0;
    }
    res1=math1(m);
    res2=math2(m);
    printf("z1=%lf; z2=%lf\n", res1, res2);
    float degree = 90;
    printf("%f\n", sine(M_PI/180 * degree));

    return 0;
}
