#include <stdio.h>
#include <stdbool.h>
int CalculateFee(int base_fee, int price_of_minute, int minutes) {
    if (minutes <= 499) {
        return base_fee;
    }
    else {
        int total_fee = base_fee + (minutes-499) * price_of_minute;
        return total_fee;
    }
}
bool isSimple(int n) {
    bool result = true;
    for (int i=2; i<n; i++)
        if (n % i == 0) {
            result = false;
            break;
        }
    return result;
}
void PrintSimple(int n) {
    printf("\n");
    for (int i = 2; i <= n; i++) {
        if (isSimple(i)) {
            printf("%d%c", i, ' ');
            
        }
    }
}
int main() {
    printf("%d",CalculateFee(400, 10, 520));
    PrintSimple(21);
    return 0;
}