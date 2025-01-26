#include <stdio.h>

int main(){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int lowest = 70;
    for(int i = 0; i < 8; i++){
        if(ages[i] < lowest){
            lowest = ages[i];
        }
    }
    printf("%d\n", lowest);
}