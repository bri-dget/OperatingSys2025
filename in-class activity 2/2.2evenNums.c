#include <stdio.h>
// Print even numbers between 0 and 10

int main(){
    int i = 0;
    while(i <= 10){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}