#include <stdio.h>
FILE *fptr;

int main(){
    if (fptr == NULL){ //checks to see if the file exists
        fptr = fopen("practice.txt", "w"); //open a file in writing mode
        fprintf(fptr, "Some Text"); //write some text to the file
        fclose(fptr); //close the file

        fptr = fopen("hello.txt", "a"); //open file in append mode
        fprintf(fptr, "\n hello"); //write text to file
        fclose(fptr);//close the file

        fptr = fopen("hello.txt", "r"); //open file in read mode
        char myString[100]; //store the contents of the file
        //fgets(myString, 100, fptr); // read the contect and store it inside myString, reading only one line
        while(fgets(myString, 100, fptr)){ //reads multiple lines
            printf("%s", myString);
        }
        printf("%s\n", myString); //print the file contents
        fseek(fptr, 0, SEEK_END); //moving pointer to the end
        printf("%ld\n", ftell(fptr)); //printing position of the pointer
        fclose(fptr); //close the file
        }
    return 0;
}