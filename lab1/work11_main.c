#include <stdio.h>
#include <stdlib.h>
#include "work11.h"

int main() {
    int a, a1, b, b1, c, c1;
    scanf("%d %d %d %d %d %d", &a, &a1, &b, &b1, &c, &c1);
    struct Triangle n = {
        a, a1, b, b1, c, c1
    };
    Square(&n);
    printf("%d", n.square);
    return 0;
}