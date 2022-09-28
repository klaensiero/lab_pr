#include <stdio.h>

int main () {
    int num;
    int num2;
    printf("Введите число: ");
    scanf("%d", &num);
    printf("В восьмеричной системе счисления: %o\n", num);
    printf("Число в восьм. сист. счисления %o; сдвиг влево на 1 в восьмеричной системе счисления: %o\n", num, num << 1);
    printf("Число в восьм. сист. счисления %o; битовое отрицание в восьмеричной системе счисления: %o\n", num, ~num);

    printf("Введите второе число: ");
    scanf("%o", &num2);
    printf("Исключающее 'или': %o xor %o = %o\n", num, num2, num^num2);
    return 0;
}