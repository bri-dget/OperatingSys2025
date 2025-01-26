#include <stdio.h>
// 1.4: Calculate the percentage of a user's score in relation to the maximum score in a game
int main(){
    int maxScore = 500;
    int userScore = 423;
    float percentScore = (float) userScore / maxScore * 100;
    printf("%.2f\n", percentScore);
}