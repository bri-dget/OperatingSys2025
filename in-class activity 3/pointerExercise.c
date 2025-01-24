#include <stdio.h>

int main(){
    int numbers[4] = {25, 50, 75, 100};
    int len;
    printf("%d\n", *(numbers + 1));//second element using pointer
    len = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < len; i++){
        printf("%d\n", *(numbers + 1));
    }
}