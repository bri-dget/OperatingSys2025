#include <stdio.h>
void myfunction(char name[], int age){
    printf("Hello %s. You are %d years old.\n", name, age);
    int x = 22;
    printf("%d\n", x);
}

int main(){
    myfunction("Liam", 3);
    myfunction("Jenny", 14);
    myfunction("Anja", 30);
    return 0;
}

int x = 5;

