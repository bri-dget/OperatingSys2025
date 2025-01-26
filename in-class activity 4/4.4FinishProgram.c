#include <stdio.h>
#include <string.h>

int main() {
    FILE* filepointer; 
    char dataToBeRead[50];

    // Open the file in read mode
    filepointer = fopen("GfgTest.c", "r");
    if (filepointer == NULL) {
        printf("gfgtest.c file failed to open.\n");
    } else {
        printf("The file is now opened. \n");
        while (fgets(dataToBeRead, sizeof(dataToBeRead), filepointer)) {
            printf("%s", dataToBeRead);
        }
        rewind(filepointer);
        char buffer[50];
        size_t bytesRead;
        while ((bytesRead = fread(buffer, 1, sizeof(buffer), filepointer)) > 0) {
            fwrite(buffer, 1, bytesRead, stdout);
        }

        fclose(filepointer);
    }
    return 0;
}
