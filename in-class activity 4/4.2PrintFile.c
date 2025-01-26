#include <stdio.h>
FILE *file;

int main(){
    file = fopen("hello.txt", "r");
    char myString[100];
    while(fgets(myString, 100, file)){
        printf("%s\n", myString);
    }

}