#include <stdio.h>

int main() {
    int number;
    printf("Введите число: ");
    scanf("%d", &number);
    while ((number >= 20) && (number <= 30)) {
        printf("Попал в диапазон\n");
        return 0;
    }
    printf("Не попал в диапазон\n");
    return 0;
} 