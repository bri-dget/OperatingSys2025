#include <stdio.h>

int main(){
    int total;
    for(int i = 0; i <= 12; i++){
        for(int j = 0; j <= 12; j++){
            total = i * j;
            printf("%d x %d = %d ", i, j, total);
        }
        printf("\n");
    }
}