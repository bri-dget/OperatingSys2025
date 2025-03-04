#include <stdio.h>
#include <stdbool.h> //allows for boolean
int main()
{ 
    //printf("Hello World\n");
    int myNum = 123;
    float decimal = 99.99;
    char singleCharacters = 'B';
    double myDouble = 123984329349084;

    printf("My number is: %d\n", myNum);
    printf("My decimal is: %.2f\n", decimal);
    printf("My single character is: %c\n", singleCharacters);
    printf("My double is: %lf\n", myDouble);

    int length = 10;
    int width = 5;
    int area = length * width;
    printf("The Area of a retangle is: %d\n", area);

    char a = 65, b = 66, c = 67;
    printf("%c", a);
    printf("%c", b);
    printf("%c\n", c);

    char myText[] = "Hello\n";
    printf("%s", myText);

    float f1 = 35e3;
    double d1 = 12E4;
    printf("%f\n", f1);
    printf("%f\n", d1);

    int myInt;
    float myFloat;
    char myChar;
    double myDou;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myChar));
    printf("%lu\n", sizeof(myDou));
    printf("%lu\n", sizeof(myFloat));

    int numItems = 50;
    float cost = 9.99;
    double total = 50 * 9.99;
    printf("Total cost is: %.2lf\n", total);

    float sum  = 5.0 / 2.0;
    printf("%f\n", sum);

    int maxScore = 500;
    int userScore = 423;
    float percentScore = (float) userScore / maxScore * 100;
    printf("%.2f\n", percentScore);

    const int MINUTESPERHOUR = 60; //common to use capitals for constants
    const float PI = 3.14;

    bool isItJanurary = true;
    bool isItFeburary = false;

    for (int i = 1; i <= 2; ++i){
        printf("Outer: %d\n", i);
    }
    for (int j = 1; j <= 3; ++j){
        printf("Inner: %d\n", j);
    }

    int myNumbers[] = {25, 50, 75, 100};
    int numbers[4];
    numbers[0] = 1;
    int size = sizeof(myNumbers); //prints 20 because there are 20 bytes

    // char firstName[0];
    // printf("Enter your first name: ");
    // scanf("%s", firstName);
    // printf("Hello %s\n", firstName);

    int myAge = 43;
    int* ptr = &myAge;
    printf("%d\n", myAge); //outputs the value of myAge
    printf("%p\n", &myAge); //outputs the memory address of myAge
    printf("%p\n", ptr); //outputs the memory address of myAge because the pointer is pointing at it
    printf("%d\n", *ptr); //dereference so will print 43

    int pointer = 10;
    // int *ptr = &pointer; // stores the memory address of another variable in its value

    int array[4] = {25, 50, 75, 100};
    printf("%p\n", array); //gets the memory address of the array
    printf("%p\n", &array[0]); //memory address of the first element in the array
    printf("%d\n", *(numbers + 1));
    printf("%d", array[1]);

    return 0;
    }