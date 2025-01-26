#include <stdio.h>

int main() {
    int numbers[4] = {25, 50, 75, 100};
    int len;
    len = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < len; i++) {
        printf("%d\n", *(numbers + i)); 
    }
    return 0;
}
