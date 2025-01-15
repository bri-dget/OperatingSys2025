//write a C program that asks user for temp and output 1 if temperature is > 70F and < 85F otherwise put 0
#include<stdio.h>

int main(){
    int temp = 0;
    printf("What is the current temperature? ");
    scanf("%d", &temp);
    int high = 85;
    int low = 70;
    printf("%d", temp > low && temp < high);
}