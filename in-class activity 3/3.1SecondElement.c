#include <stdio.h>

int main() {
    int numbers[4] = {25, 50, 75, 100};
    printf("%d\n", *(numbers + 1)); // second element using pointer
    return 0;
}
