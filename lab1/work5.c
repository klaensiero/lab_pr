#include <stdio.h>

int main() {
    int arr[7] = {90, 76, 54, 23, 56, 12, 48};
    int n;
    for (int i=0; i<1; ++i){
        printf("%d%c%d%c%d\n%d%c%d%c%d%c%d\n", arr[i], ' ', arr[i+1], ' ', arr[i+2], arr[i+3], ' ', arr[i+4], ' ', arr[i+5], ' ', arr[i+6]);
    }
    printf("------------------------------------\n");
    scanf("%d", &n);
    int matr1[n][n], matr2[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &matr1[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &matr2[i][j]);
        }
    }
    int res[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            res[i][j]=0;
            for (int m=0; m<n; m++){
                res[i][j]=res[i][j]+matr1[i][m]*matr2[m][j];
            }
        }
    }
    for (int i=0; i<n;i++){
        for (int j=0; j<n; j++){
            printf("%d%c",res[i][j], ' ');
        }
        printf("\n");
    }
    return 0;
}
