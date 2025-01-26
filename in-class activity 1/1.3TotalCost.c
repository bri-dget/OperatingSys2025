#include <stdio.h>
// 1.3: Calculate total cost of 50 items, each $9.99. Print out number of items, cost of each item, and the total cost (with 2 decimals)
int main(){
    int numItems = 50;
    float cost = 9.99;
    double total = 50 * 9.99;
    printf("Total cost is: %.2lf\n", total);
}