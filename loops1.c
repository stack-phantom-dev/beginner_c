#include<stdio.h>
int main(){
    int passwd;
    do{
        printf("Enter your password: ");
        scanf("%d",&passwd);
        if(passwd != 1324){
            printf("Wrong password ,Try again!\n");
        }
        else{
            printf("Access Granted!");
        }
    }while(passwd != 1324);
    return 0;
}