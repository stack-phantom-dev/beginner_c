#include<stdio.h>
int main(){
    char name[50];
    int yr;
    int age;
    printf("Enter your name : ");
    fgets(name, 50, stdin);
    printf("Enter your birth year : ");
    scanf("%d",&yr);
    age = 2026 - yr;
    printf("%s",name);
    printf("Your age is found to be : %d",age);
    return 0;

}