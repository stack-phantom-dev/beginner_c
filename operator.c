#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Sum : %d\n", a+b);
    printf("Difference : %d\n", a-b);
    printf("Product : %d\n", a*b);
    printf("Quotient : %.3f\n", (float)a/b);
    printf("Remainder : %d\n", a%b);
    return 0;
}