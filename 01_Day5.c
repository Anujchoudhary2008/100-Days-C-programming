#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;
    float simpleInterest, CompoundInterest;
    scanf("%f %f %f", &p, &r, &t);
    simpleInterest = (p * r * t) / 100;
    CompoundInterest = p * pow((1 + r / 100), t) - p;
    printf("simpleInterest=%.0f , compoundInterest=%.2f", simpleInterest , CompoundInterest);
    return 0;
}