#include <stdio.h>
struct House
{
    char address[50];
    int squrefeet;
    int numBedroom;
    int numBathroom;
    int price;
};


int main(){
    struct House house1 = {"123 lakeland street", 2000, 2, 1, 200000};
    struct House house2 = {"473 computer science ave", 6000, 3, 2, 600000};
    struct House house3 = {"833 C programming circle", 5000, 5, 10, 20};

    printf("Address: %s, Squarefeet: %d, Number of bedrooms: %d, Number of bathrooms: %d, Price: %d\n", house1.address, house1.squrefeet, house1.numBedroom, house1.numBathroom, house1.price);
    printf("Address: %s, Squarefeet: %d, Number of bedrooms: %d,Number of bathrooms: %d, Price: %d\n", house2.address, house2.squrefeet, house2.numBedroom, house2.numBathroom, house2.price);
    printf("Address: %s, Squarefeet: %d, Number of bedrooms: %d, Number of bathrooms: %d, Price: %d\n", house3.address, house3.squrefeet, house3.numBedroom, house3.numBathroom, house3.price);

}