#include <stdio.h>

int main() {
    float t1;
    char t2;
    int check;
    printf("Выберите операцию - вывести вещественное число (1) или символ (2): ");
    scanf("%d", &check);
    if (check==1) {
        printf("Введите вещественное число: ");
        scanf("%f", &t1);
        printf("Вывод: %f\n", t1);
    }
    if (check==2) {
        printf("Введите символ: ");
        scanf("%s", &t2);
        printf("Вывод: %c\n", t2);
    }
    return 0;
}