#include<stdio.h>
int main(){
    float l;
    float b;
    float area;
    printf("Enter length of the rectangle: ");
    scanf("%f",&l);
    printf("Enter Breadth of the rectangle: ");
    scanf("%f",&b);
    area = l*b;
    printf("Area of the Rectangle : %f",area);
    return 0;

    }