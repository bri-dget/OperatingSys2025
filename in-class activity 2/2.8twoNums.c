#include <stdio.h>
//2.8: Write a C program to read two numbers from user and add them using pointers.

int main(){
    int num1, num2, results;
    int *ptr1 = &num1, *ptr2 = &num2; // Pointers to the numbers
    printf("What is the first number?\n");
    scanf("%d", &num1);
    printf("What is the second number?\n");
    scanf("%d", &num2);
    results = *ptr1 + *ptr2;
    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, results);
    return 0;
}