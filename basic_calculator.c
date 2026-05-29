#include<stdio.h>
int main()
{
    int a;
    int b;
    char op;
    printf("Enter two numbers to be calculated: ");
    scanf("%d %d",&a,&b);
    printf("Enter the operator to proceed(+ - * /): ");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        printf("Sum : %d",a+b);
        break;
    case '-':
        printf("Difference : %d",a-b);
        break;
    case '*':
        printf("Product : %d",a*b);
        break;
    case '/':
        printf("Quotient : %f",(float)a/b);
        break;
    
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}