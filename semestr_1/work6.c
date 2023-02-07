#include <stdio.h>
#include <stdlib.h>
#define s 4
int main(){
    int *mass1;
    mass1[0]=50;
    mass1[1]=40;
    mass1[2]=30;
    mass1[3]=20;
    for (int i=0; i<s; i++){
        printf("%d%c", mass1[i],' ');
    }
    printf("\n-----------\n");
    int *mass2=malloc(s*sizeof(int));
    mass2[0]=50;
    mass2[1]=40;
    mass2[2]=30;
    mass2[3]=20;
    for(int i=0; i<s; i++){
        printf("%d%c", mass2[i],' ');
    }
    free(mass2);
    return 0;
}