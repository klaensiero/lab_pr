#include <stdio.h>

int main() {
    float t1;
    char t2 [100];
    printf("Введите вещественное число: ");
    scanf("%f", &t1);
    printf("Вывод: %.1f\n", t1);
    printf("Введите символ: ");
    scanf("%s", &t2);
    printf("Вывод: %s\n", t2);
    return 0;
}