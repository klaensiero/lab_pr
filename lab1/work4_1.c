#include <stdio.h>

int main() {
    int number;
    printf("Введите число: ");
    scanf("%d", &number);
    long res;
    int r=20;
    int l=30;
    long a=(r-number) & 2147483648;
    long b=(number-l) & 2147483648;
    res=a+b;
    printf("%d\n", !!res);
    return 0;
} 