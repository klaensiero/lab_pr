#include <stdio.h>

int main(){
    
    FILE *file = fopen("test.txt", "w");
    fclose(file);
    return 0;
}