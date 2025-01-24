#include <stdio.h>
//convert F to C
int convert(int Ftemp){
    int Ctemp = (Ftemp - 32) * 5/9;
    printf("%d in Celcius is: %d\n", Ftemp, Ctemp);
}
//calc area from width and height
int calcArea(int width, int height){
    int area = width * height;
    printf("The area of %d and %d is %d\n", width, height, area);
}
//calc area from radius
int calcAreaFromRadius(int radius){
    int square = radius * radius;
    int Rarea = (3.14 * square);
    printf("The area using the radius %d is %d\n",radius, Rarea );
}

int main(){
    convert(45);
    calcArea(32, 54);
    calcAreaFromRadius(42);
    return 0;
}

