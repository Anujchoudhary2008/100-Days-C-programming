#include <stdio.h>

int main(){
    float celsius;
    float fahrenheit;
    scanf("%f",&celsius);
    fahrenheit=((9.0/5.0)*celsius)+32;
    printf("the value of celsius to fahrenheit is %f",fahrenheit );
    return 0;

}