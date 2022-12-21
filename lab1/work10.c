#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum(int n) {
    if (n % 10 == 0) {
        return 0;
    }
    else
    {
        return sum(n/10)+(n%10);
    }
}
void func (int *X, int *Y, int n) {
    float len=0;
    float max_len=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            len=0;
            if (i!=j){
                len=sqrt(pow((X[j]-X[i]), 2)+pow((Y[j]-Y[i]), 2));
                if (max_len<len){
                    max_len=len;
                }
            }
        }
    }
    printf("Расстояние: %f", max_len);
}
int main() {
    int num, num2, n;
    printf("Введи число: ");
    scanf("%d", &num);
    printf("%d", sum(num));
    printf("\n");
    printf("Введите количество строчек: ");
    scanf("%d", &n);
    int X [n];
    int Y [n];
    for (int i=0; i<n; i++) {
        scanf("%d", &X[i]);
        scanf("%d", &Y[i]);
    }
    func(X, Y,n);
    return 0;
}