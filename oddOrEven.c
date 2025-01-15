#include <stdio.h>

int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("Your number is even!\n");
    }
    else{
        printf("Your number is odd!\n");
    }
}