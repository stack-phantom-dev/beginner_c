#include<stdio.h>
int main()
{
    float C;
    float F;
    printf("Enter Celcius: ");
    scanf("%f",&C);
    F = (C*(9/5)) + 32;
    printf("%.2f C is %.2f Farenheit",C,F);
    return 0;

}