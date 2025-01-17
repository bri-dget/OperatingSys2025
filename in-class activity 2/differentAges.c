#include <stdio.h>

int main(){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int average;
    for(int i = 0; i < 8; i++){
        average += ages[i];
    }
    average /= 8;
    printf("The average is %d\n", average);
}