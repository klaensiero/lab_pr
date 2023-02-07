#include <stdio.h>
#include <stdlib.h>
#include "unistd.h"
long long Fibonacci_for(int n) {
    long long num, num1 = 0, num2 = 1;
    for (int i=1; i < n; ++i) {
        num = num1+num2;
        num1 = num2;
        num2 = num;
        sleep(1);
    }
    return num;
}
long long Fibonacci_recursion(int num) {
    if (num < 2) 
        return 1;
    if (num < 1)
        return 0;
    return Fibonacci_recursion(num-2)+Fibonacci_recursion(num-1);
}


int main() {
    long long res1 = Fibonacci_for(2000);
    long long res2 = Fibonacci_recursion(2000);
    printf("Recursion: %lli\n", res2);
    printf("Loop: %lli\n", res1);
}