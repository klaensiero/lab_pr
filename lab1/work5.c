#include <stdio.h>

int main() {
    int arr[7] = {90, 76, 54, 23, 56, 12, 48};
    for (int i=0; i<1; ++i){
        printf("%d%c%d%c%d\n%d%c%d%c%d%c%d\n", arr[i], ' ', arr[i+1], ' ', arr[i+2], arr[i+3], ' ', arr[i+4], ' ', arr[i+5], ' ', arr[i+6]);
    }
    printf("-------------------------------------------\n");
    int matr_1[2][2] = {{1, 2}, {3, 4}};
    int matr_2[2][2] = {{1, 0}, {0, 1}};
    int matr_3[2][2];
    matr_3[0][0]=matr_1[0][0]*matr_2[0][0]+matr_1[0][1]*matr_2[1][0];
    matr_3[0][1]=matr_1[0][0]*matr_2[0][1]+matr_1[0][1]*matr_2[1][1];
    matr_3[1][0]=matr_1[1][0]*matr_2[0][0]+matr_1[1][1]*matr_2[1][0];
    matr_3[1][1]=matr_1[1][0]*matr_2[0][1]+matr_1[1][1]*matr_2[1][1];
    for (int i=0; i<2; ++i){
        for (int j=0; j<2; ++j){
            printf("%d%c", matr_3[i][j], ' ');
        }
        printf("\n");
    }
    return 0;
}
