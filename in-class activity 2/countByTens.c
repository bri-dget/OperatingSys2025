#include <stdio.h>

int main(){
    int num = 10;
    for(int i = 10; i <= 100; i++){
        printf("%d\n", num);
        for(int j = 0; j < 10; j++){
            num++;
            i++;
        }
    }
    printf("100\n");
}