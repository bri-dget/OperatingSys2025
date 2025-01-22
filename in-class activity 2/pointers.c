#include <stdio.h>

int main(){
    double dou = 1.1;
    int integer = 1;
    char aye = 'A';

    double* ptrDouble = &dou;
    int* ptrInt = &integer;
    char* ptrAye = &aye;

    printf("%f\n", dou);
    printf("%p\n", &dou);
    printf("%lu\n", sizeof(dou));

    printf("%d\n", integer);
    printf("%p\n", &integer);
    printf("%lu\n", sizeof(integer));

    printf("%c\n", aye);
    printf("%p\n", &aye);
    printf("%lu\n", sizeof(aye));

    printf("%p\n", ptrDouble);
    printf("%p\n", &ptrDouble);
    printf("%lu\n", sizeof(ptrDouble));

    printf("%p\n", ptrInt);
    printf("%p\n", &ptrInt);
    printf("%lu\n", sizeof(ptrInt));

    printf("%p\n", ptrAye);
    printf("%p\n", &ptrAye);
    printf("%lu\n", sizeof(ptrAye));

    int num1, num2, total;
    int *ptr1, *ptr2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    total = *ptr1 + *ptr2;
    printf("The total of %d and %d is %d\n", num1, num2, total);
}
