#include <stdio.h>
// 1.5: Write a C program that ask user for temperature and output 1 if temperature > 70F and < 85F, otherwise output 0
int main(){
    int temp = 0;
    printf("What is the current temperature? ");
    scanf("%d", &temp);
    int high = 85;
    int low = 70;
    printf("%d", temp > low && temp < high);
}