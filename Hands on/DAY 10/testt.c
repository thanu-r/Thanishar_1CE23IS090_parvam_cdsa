#include<stdio.h>
int main(){
    int num1,num2;
    char operator;
    printf("Welcome to mini computer\n");
    printf("enter the num 1:");
    scanf("%d",&num1);
    printf("Enter an operator(+,-,*,/):\n");
    scanf("%c",&operator);
    printf("Enter the num 2:");
    scanf("%d",&num2);
    switch(operator){
        case '+':
        printf(" %d + %d \n",num1,num2);
        break;
        case '-':
        printf("%d - %d\n",num1,num2);
        break;
        case '*':
        printf("%d * %d\n",num1,num2);
        break;
        case '/':
        printf("%d / %d\n",num1,num2);
        break;
        default:
        printf("%d",num1,num2);
    }return 0;
}