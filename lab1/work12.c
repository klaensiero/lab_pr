#include<stdio.h>
#include <stdio.h>
 
 
int main() {
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i=1, month, day, year, n, day1, month1, year1;
    int l=0;
    int s;
    FILE *output = fopen("Text", "w+");
    printf("День: ");
    scanf("%d", &day);
    printf("Месяц: ");
    scanf("%d", &month);
    printf("Год: ");
    scanf("%d", &year);
    printf("Количество выводимых дней: ");
    scanf("%d", &n);
 
    l = (year%4== 0 && year % 100 != 0 || year % 400 == 0);
 
    while (i <= n){
        if (day+1 > months[month]+(l && month==2)){
            if (month+1 > 12){
                month=1;
                year+=1;
                l=(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
            }
            else{
                month+=1;
                year=year;
            }
            day=1;
        }
        else
        {
            day+=1;
        }
        printf("%02d.%02d.%4d\n", day, month, year);
        fprintf(output, "%02d.%02d.%4d\n", day, month, year);
        ++i;
    }
 
    fclose(output);
 
    return 0;
 
}