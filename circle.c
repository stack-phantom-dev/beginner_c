#include<stdio.h>
int main()
{
    float r;
    float pi = 3.14;
    float area;
    printf("Enter radius: ");
    scanf("%f",&r);
    area = pi * r * r;
    printf("Area of the Circle: %f",area);
    return 0;
}