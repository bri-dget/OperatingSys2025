#include <stdio.h>
// 1.6: Create a C program to determine if a number entered by user is negative, positive, or zero
int main(){
    printf("What is your number? ");
    int num = scanf("%d", &num);
    if (num < 0){
        printf("Your number is positive\n");
    }
    else if (num > 0)
    {
        printf("Your number is negative\n");
    }
    else{
        printf("Your number is 0\n");
    }
}