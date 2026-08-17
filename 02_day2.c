#include<stdio.h>

int main(){
    float radius;
    float area;
    float circumference;
    scanf("%f",&radius);
    area= 3.14*radius*radius;
    circumference= 2*3.14*radius;
    printf("the area of circle is %f and circumference is %f ", area, circumference);
    return 0;
}