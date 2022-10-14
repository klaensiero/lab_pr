#include <stdio.h>

int main() {
    int num, num1;
    scanf("%d",&num1);
    printf("%d",(num1>>17)%2);
    return 0;
}