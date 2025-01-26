#include <stdio.h>
#include <string.h>

int main(){
    FILE *filePointer;
    char dataToBeWritten[50] = "GeeksForGeeks - A Computer ""Science portal for Geeks";
    filePointer = fopen("GfgTest.c", "w");
    if (filePointer == NULL){
        printf("GtgTest.c file failed to open.");
    }
    else{
        printf("The file is now opened. \n");
        if(strlen(dataToBeWritten) > 0){
            fprintf(filePointer, dataToBeWritten);
        }
    }
}
