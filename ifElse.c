#include <stdio.h>

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