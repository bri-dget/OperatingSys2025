#include <stdio.h>

int main(int argc, char *argv[]){
    if (argc == 1){
        printf("%s\n", argv[0]);
    } 
    else if (argc == 2){
        printf("%s %s\n", argv[1] ,argv[2]);
    }
    return 0;
}