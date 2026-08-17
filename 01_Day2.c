#include<stdio.h>

int main(){
    int length;
    int breadth;
    scanf("%d %d",&length,&breadth);
    int area,perimeter;
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("the area of rectangle is %d and perimeter is %d",area , perimeter);
    return 0;


}