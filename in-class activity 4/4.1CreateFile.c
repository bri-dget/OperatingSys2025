#include <stdio.h>
FILE *file;

int main(){
    if (file == NULL){
        file = fopen("hello.txt", "w");
        fprintf(file, "Hello, ");
        fprintf(file, "How are you? ");
        fprintf(file, "My name is... ");
        fprintf(file, "What's your name? ");
        fclose(file); 
    }
    return 0;
}